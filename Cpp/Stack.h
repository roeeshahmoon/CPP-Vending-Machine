#pragma once
#include "StackNode.h"
class Stack
{
	StackNode* top;
	
public:
	Stack();
	const int push(const int x);
	const int pop();
	const bool isEmpty();
	const int peek();
	~Stack();
};

