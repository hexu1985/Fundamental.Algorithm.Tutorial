/**
 * @file ListStack.hpp
 * @brief 链表实现的栈
 * @author hexu_1985@sina.com
 * @version 1.0
 * @date 2021-04-23
 */
#ifndef LIST_STACK_INC
#define LIST_STACK_INC

/**
 * @brief 链表实现的栈
 *
 * @tparam Item 栈元素类型
 */
template <typename Item>
class ListStack {
private:
    /**
     * 单向链表节点
     *    ___     
     *   |   |------>
     *   |___| next  
     * 
     */
    struct Node {
        Node(): next(nullptr), item() {}
        Node(const Item &item_): next(nullptr), item(item_) {}

        Node *next;
        Item item;
    };

    Node *head;

private:
    ListStack(const ListStack &) = delete;
    ListStack &operator =(const ListStack &) = delete;

public:
    /**
     * @brief 构造一个空栈
     */
    ListStack()
    {
        /**
         * 初始化head节点
         * 
         * [head] --> nullptr
         *
         */
        head = new Node();
        head->next = nullptr;
    }

    /**
     * @brief 释放动态内存
     */
    ~ListStack()
    {
        Node *node = head->next;
        while (node != nullptr) {
            Node *next = node->next;
            delete node;
            node = next;
        }
        delete head;
    }

    /**
     * @brief 获取当前栈中元素个数
     *
     * @return 当前栈大小
     */
    size_t size() const
    {
        Node *node = head->next;
        int n = 0;
        while (node != nullptr) {
            node = node->next;
            ++n;
        }
        return n;
    }

    /**
     * @brief 判断栈是否为空
     *
     * @return 栈为空返回true, 否则返回false
     */
    bool isEmpty() const
    {
        return head->next == nullptr;
    }

    /**
     * @brief 往栈顶放入一个元素
     *
     * @param item 被放入的元素值
     */
    void push(const Item &item)
    {
        /**
         * 在链表的head结点后插入node结点
         *     ___                   ___
         *    |   |---------------->|   |------>
         *    |___|                 |___|
         *      ^-head
         *                 ___        
         *                |   |------>
         *                |___|       
         *                  ^-node
         * =========================================
         *     ___                   ___
         *    |   |---------------->|   |------>
         *    |___|             .-->|___|
         *      ^-head          |
         *                 ___  |(1) 
         *                |   |-'
         *                |___|       
         *                  ^-node       
         * =========================================
         *     ___                   ___
         *    |   |----.        .-->|   |------>
         *    |___|    |(2)     |   |___|
         *      ^-head |        |
         *             |   ___  |      
         *             '->|   |-'
         *                |___|       
         *                  ^-node       
         */
        Node *node = new Node(item);
        node->next = head->next;
        head->next = node;
    }

    /**
     * @brief 获取并弹出栈顶的元素
     *
     * @return 栈顶首的元素值
     */
    Item pop()
    {
        if (isEmpty()) {
            return head->item;
        }
        /**
         * 从链表上删除head结点后面的结点
         *     ___           ___           ___ 
         *    |   |-------->|   |-------->|   |------>
         *    |___|         |___|         |___|
         *      ^-head        ^-node
         * ==================================================
         *              ____________________
         *             |                    |
         *     ___     |(1)  ___           _V_ 
         *    |   |----'    |   |-------->|   |------>
         *    |___|         |___|         |___|
         *      ^-head        ^-node
         */
        Node *node = head->next;
        Item item = node->item;
        head->next = node->next;
        delete node;
        return item;
    }

    /**
     * @brief 获取栈顶元素的引用
     *
     * @return 栈顶元素值的引用
     */
    Item &top()
    {
        if (isEmpty()) {
            return head->item;
        }

        return head->next->item;
    }

    /**
     * @brief 获取栈顶元素的常引用
     *
     * @return 栈顶元素值的常引用
     */
    const Item &top() const
    {
        if (isEmpty()) {
            return head->item;
        }

        return head->next->item;
    }
};

#endif
