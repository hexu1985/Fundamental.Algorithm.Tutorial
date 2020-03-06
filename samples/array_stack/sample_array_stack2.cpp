// stack::empty
#include <iostream>     // std::cout
#include "ArrayStack.hpp"    // stack

using namespace mini_algo;

int main ()
{
  ArrayStack<int> mystack;
  int sum (0);

  for (int i=1;i<=10;i++) mystack.push(i);

  while (!mystack.isEmpty())
  {
     sum += mystack.top();
     mystack.pop();
  }

  std::cout << "total: " << sum << '\n';

  return 0;
}

