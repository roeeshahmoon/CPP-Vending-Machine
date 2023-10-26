#include <iostream>
using namespace std;
class StackNode
{
	
	int data;
	StackNode* next;
	StackNode* previous;
	
public:
	StackNode(const int x, StackNode* s);
	StackNode()  ;
	const int getdata();
	StackNode* getnext();
};

