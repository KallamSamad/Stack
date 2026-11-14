#pragma once
#include "StackItem.h"
class Stack
{
public:
	void push(int value);
	void pop();
	void display();
	Stack(int capacity=2);
	~Stack();
 private:
	void resize();
 	int capacity=0;
	int count=0;
	StackItem** items = nullptr;


};

