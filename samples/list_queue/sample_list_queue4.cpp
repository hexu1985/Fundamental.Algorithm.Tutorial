/** \example list_queue/sample_list_queue4.cpp
 * This is an example of how to use the ListQueue class.
 */
// ListQueue::front
#include <iostream>         // std::cout
#include "ListQueue.hpp"   // ListQueue

int main ()
{
  ListQueue<int> myqueue;

  myqueue.push(77);
  myqueue.push(16);

  myqueue.front() -= myqueue.back();    // 77-16=61

  std::cout << "myqueue.front() is now " << myqueue.front() << '\n';

  return 0;
}
