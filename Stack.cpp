#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int capacity) : capacity(capacity){
	items=new StackItem*[capacity]();
}

Stack::~Stack() {
	for (int i = 0; i < count; i++) {
		delete items[i];
		items[i] = nullptr;

	}
	delete[] items;
	items = nullptr;
 }

void Stack::push(int value) {
	if (count == capacity) {
		cout << "Stack is full" << "\n";
		resize();
	}
	StackItem* newItem = new StackItem(value);
	items[count] = newItem;
	count++;
}
void Stack::resize() {
	capacity = capacity * 2;
	StackItem** newArray = new StackItem * [capacity]();

	for (int i = 0; i < count; i++) {
		newArray[i]=items[i];
		}
	delete[] items;
	items = newArray;
 
}

void Stack::display() {
	for (int i = 0; i < count; i++) {
		cout << items[i]->getItem() << "\n";
	}
}

void Stack::pop() {
	if (count == 0) {
		cout << "Stack is Empty" << "\n";

	}
	else {
		int temp = items[count - 1]->getItem();
		delete items[count-1];
		items[count-1] = nullptr;
		count--;
		cout << "Popped item " << temp<<"\n";

	}
}