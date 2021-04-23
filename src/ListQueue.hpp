/**
 * @file ListQueue.hpp
 * @brief 链表实现的队列
 * @author hexu_1985@sina.com
 * @version 1.0
 * @date 2021-04-23
 */
#ifndef LIST_QUEUE_INC
#define LIST_QUEUE_INC

/**
 * @brief 链表实现的队列
 *
 * @tparam Item 队列元素类型
 */
template <class Item>
class ListQueue {
private:
    ListQueue(const ListQueue &) = delete;
    ListQueue &operator =(const ListQueue &) = delete;

public:
    /**
     * @brief 构造一个空的队列
     */
    ListQueue()
    { 
    }

    /**
     * @brief 释放动态内存
     */
    ~ListQueue()
    {
    }

    /**
     * @brief 获取队列中元素个数
     *
     * @return 当前队列大小
     */
    int size() const
    {
    }

    /**
     * @brief 判断队列是否为空
     *
     * @return 队列为空返回true, 否则返回false
     */
    bool isEmpty() const
    { 
    }

    /**
     * @brief 往队列尾放入一个元素
     *
     * @param item 被放入的元素值
     */
    void push(const Item &item)
    { 
    }

    /**
     * @brief 获取并弹出队列首的元素
     *
     * @return 队列首的元素值
     */
    Item pop()
    { 
    }

    /**
     * @brief 获取并弹出队列首的元素
     *
     * @param item 队列首的元素值存入item里
     */
    void pop(Item &item)
    {
    }

    /**
     * @brief 获取队首元素的引用
     *
     * @return 队首元素值的引用
     */
    Item &front()
    {
    }

    /**
     * @brief 获取队首元素的常引用
     *
     * @return 队首元素值的常引用
     */
    const Item &front() const
    {
    }

    /**
     * @brief 获取队尾元素的引用
     *
     * @return 队尾元素的引用
     */
    Item &back()
    {
    }

    /**
     * @brief 获取队尾元素的常引用
     *
     * @return 队尾元素的常引用
     */
    const Item &back() const
    {
    }
};

#endif
