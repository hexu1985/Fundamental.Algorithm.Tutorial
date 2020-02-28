/**
 * @file ArrayQueue.hpp
 * @brief 数组实现的循环队列
 * @author hexu_1985@sina.com
 * @version 1.0
 * @date 2020-02-28
 */
#ifndef MINI_UTILS_ARRAY_QUEUE_INC
#define MINI_UTILS_ARRAY_QUEUE_INC

namespace mini_algo {

/**
 * @brief 数组实现的队列
 *
 * @tparam Item 队列元素类型
 */
template <class Item>
class ArrayQueue {
// 索引:   [0][1][2]...[7][8][9]...[N-1][N]
// 数组:   [x][x][x]...[x][x][x]...[xxx]
//             ^head          ^tail
private:
    Item *A;    // 数组空间, A[0], ..., A[N-1]
    int N;      // 数组容量
    int head;   // 队首元素的下标, head的取值范围[1, N]
    int tail;   // 队尾元素的下一个位置的下标, tail的取值范围[0, N-1]

private:
    ArrayQueue(const ArrayQueue &) = delete;
    ArrayQueue &operator =(const ArrayQueue &) = delete;

public:
    ArrayQueue(int maxN)
    { 
        A = new Item[maxN+1];
        N = maxN+1; 
        head = N; 
        tail = 0; 
    }

    ~ArrayQueue()
    {
        delete [] A;
    }

    int size() const
    {
        return (tail-head+N) % N;
    }

    int capacity() const
    {
        return N-1;
    }

    bool isEmpty() const
    { 
        return (head%N) == tail;
    }

    bool isFull() const
    {
        return (tail+1) == head;
    }

    void push(const Item &item)
    { 
        A[tail++] = item; 
        tail = tail % N; 
    }

    Item pop()
    { 
        head = head % N; 
        return A[head++]; 
    }

    void pop(Item &item)
    {
        head = head % N; 
        item = A[head++];
    }

    Item &front()
    {
        return A[head%N];           // head == N ? A[0] : A[head]
    }

    const Item &front() const
    {
        return A[head%N];           // head == N ? A[0] : A[head]
    }

    Item &back()
    {
        return A[(tail-1+N)%N];     // tail == 0 ? A[N-1] : A[tail-1];
    }

    const Item &back() const
    {
        return A[(tail-1+N)%N];     // tail == 0 ? A[N-1] : A[tail-1];
    }
};

}   // namespace mini_algo

#endif
