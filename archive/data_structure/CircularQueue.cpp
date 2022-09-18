#include <iostream>
#include "CircularQueue.h"
using namespace std;
bool CircularQueue::pop(int &t){
	//队空状态为，front==rear
	if(front == rear)
		return false;
		t = front;
		cout << t << endl;
	rear = ++front%length;
	return true;
	//t = *front++;
}
bool CircularQueue::push(int t){
	//队满状态 rear + 1 == front
	if(rear + 1 == rear)
		return false;
	++rear;
	rear = t;
	rear = ++rear%length;
	return true;
}


void CircularQueue::test(){
	cout << "hi world!"<<endl;
}

	


void hello(){
	cout << "hello world!"<<endl;
}
