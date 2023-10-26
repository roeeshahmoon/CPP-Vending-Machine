#include "Stack.h"
#include <climits>
Stack::Stack() {
	top = new StackNode;
	top = NULL;
	

}
const int Stack::push(const int x ){
	StackNode* node = new StackNode(x, top);//new node to add dinamic memorey 
	top = node;//top is on the last elemnet
	
	return 1;

}
const int Stack::pop() {
	if (this->isEmpty() == 1) {//chek if thers is underflow
		cout << "Stack empty" << endl;
		return 0;//return 0 if we couldnt do pop
	}
	cout << "Removing " << peek() << endl;//printing for the user
	StackNode* temp = top;
	
	top = top->getnext();
	
	delete(temp);//cleaning dinamic memorey
	
	return 1;// if we secssed to pop we return 1
}
const bool Stack::isEmpty() {
	if (this->top == NULL) {
		return true;
	}
	return false;
}
const int Stack::peek() {
	if (isEmpty()) {
		return INT_MIN;//if is empty return the min int
	}
	return top->getdata();

}
Stack:: ~Stack() {
	while (this->top != NULL) {
		StackNode* temp = top->getnext();//loop to clean all dinamic memorey until we got to top = NULL
		delete(top);
		top = temp;
	}
	delete(this->top);//cleaning the first node

}

