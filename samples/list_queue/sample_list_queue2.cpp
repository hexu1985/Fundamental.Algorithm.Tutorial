/** \example list_queue/sample_list_queue2.cpp
 * This is an example of how to use the ListQueue class.
 */
// ListQueue::empty
#include <iostream>         // std::cout
#include "ListQueue.hpp"   // ListQueue

int main ()
{
  ListQueue<int> myqueue;
  int sum (0);

  for (int i=1;i<=10;i++) myqueue.push(i);

  while (!myqueue.isEmpty())
  {
     sum += myqueue.front();
     myqueue.pop();
  }

  std::cout << "total: " << sum << '\n';

  return 0;
}
