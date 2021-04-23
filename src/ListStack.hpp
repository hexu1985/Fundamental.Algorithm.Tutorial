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
class Stack {
private:
    Stack(const Stack &) = delete;
    Stack &operator =(const Stack &) = delete;

public:
    /**
     * @brief 构造一个空栈
     */
    Stack()
    {
    }

    /**
     * @brief 释放动态内存
     */
    ~Stack()
    {
    }

    /**
     * @brief 获取当前栈中元素个数
     *
     * @return 当前栈大小
     */
    size_t size() const
    {
    }

    /**
     * @brief 判断栈是否为空
     *
     * @return 栈为空返回true, 否则返回false
     */
    bool isEmpty() const
    {
    }

    /**
     * @brief 往栈顶放入一个元素
     *
     * @param item 被放入的元素值
     */
    void push(const Item &item)
    {
    }

    /**
     * @brief 获取并弹出栈顶的元素
     *
     * @return 栈顶首的元素值
     */
    Item pop()
    {
    }

    /**
     * @brief 获取栈顶元素的引用
     *
     * @return 栈顶元素值的引用
     */
    Item &top()
    {
    }

    /**
     * @brief 获取栈顶元素的常引用
     *
     * @return 栈顶元素值的常引用
     */
    const Item &top() const
    {
    }
};

}   // namespace mini_algo

#endif
