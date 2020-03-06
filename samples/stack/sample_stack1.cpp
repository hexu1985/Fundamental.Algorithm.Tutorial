#include <assert.h>
#include <iostream>
#include "Stack.hpp"

using namespace mini_algo;
using namespace std;

int main()
{
	Stack<int> stack1(100);

	assert(stack1.isEmpty());
	assert(!stack1.isFull());
	assert(stack1.size() == 0);
	assert(stack1.capacity() == 100);

	// 测试push
	for (int i = 0; i < 5; ++i)
		stack1.push(i);

	cout << "stack1.size(): " << stack1.size() << endl;
	cout << "stack1.capacity(): " << stack1.capacity() << endl;
	cout << "stack1.top(): " << stack1.top() << endl;

	assert(!stack1.isEmpty());
	assert(!stack1.isFull());
	assert(stack1.size() == 5);
	assert(stack1.top() == 4);

	// 测试pop
	while (!stack1.isEmpty()) {
		cout << ' ' << stack1.pop();
	}
	cout << endl;

    int n = 0;
    while (!stack1.isFull()) {
        stack1.push(++n);
    }

    int sum = 0;
    while (!stack1.isEmpty()) {
        sum += stack1.pop();
    }
    cout << "sum: " << sum << endl;

	cout << "stack1.size(): " << stack1.size() << endl;
	cout << "stack1.capacity(): " << stack1.capacity() << endl;

	return 0;
}
