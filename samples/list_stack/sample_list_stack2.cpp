// stack::empty
#include <iostream>     // std::cout
#include "ListStack.hpp"    // stack

int main ()
{
  ListStack<int> mystack;
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

