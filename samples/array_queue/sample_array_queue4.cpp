// ArrayQueue::front
#include <iostream>         // std::cout
#include "ArrayQueue.hpp"   // ArrayQueue

using namespace mini_algo;

int main ()
{
  ArrayQueue<int> myqueue(10);

  myqueue.push(77);
  myqueue.push(16);

  myqueue.front() -= myqueue.back();    // 77-16=61

  std::cout << "myqueue.front() is now " << myqueue.front() << '\n';

  return 0;
}
