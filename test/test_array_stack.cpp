#include <assert.h>
#include <iostream>
#include <gtest/gtest.h>

#include "ArrayStack.hpp"

using namespace mini_algo;
using namespace std;

TEST(ArrayStackTest, Methods) {
	ArrayStack<int, 100> stack1;

	EXPECT_TRUE(stack1.isEmpty());
	EXPECT_FALSE(stack1.isFull());
	EXPECT_EQ(0, stack1.size());
	EXPECT_EQ(100, stack1.capacity());

	// 测试push
	for (int i = 0; i < 5; ++i)
		stack1.push(i);

	cout << "stack1.size(): " << stack1.size() << endl;
	cout << "stack1.capacity(): " << stack1.capacity() << endl;
	cout << "stack1.top(): " << stack1.top() << endl;

	EXPECT_FALSE(stack1.isEmpty());
	EXPECT_FALSE(stack1.isFull());
	EXPECT_EQ(5, stack1.size());
	EXPECT_EQ(4, stack1.top());

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
}
