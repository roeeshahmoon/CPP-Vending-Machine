#include "StackNode.h"
#include <iostream>
using namespace std;
StackNode::StackNode(const int x,StackNode* s) {
	data = x;
	next = s ;
}
StackNode::StackNode() {
	next = NULL ;
}
	const int StackNode::getdata() {//get the data of a node is const becaus it isnt need to change
	return data;
}
	 StackNode* StackNode::getnext() {// get the next of a node i tried to do this also const but it made problems on thw pop method in the stack
	return next;
}

						