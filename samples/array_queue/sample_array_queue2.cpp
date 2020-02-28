// ArrayQueue::empty
#include <iostream>         // std::cout
#include "ArrayQueue.hpp"   // ArrayQueue

using namespace mini_algo;

int main ()
{
  ArrayQueue<int> myqueue(20);
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
