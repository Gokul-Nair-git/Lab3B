/*
	CIS 22C
	Lab 03B - Queue and Stack
	Name: Santosh Lakshman and Gokul Nair
	Program Description:
	This program demonstrates all basic operations of the Queue and Stack using ints, strings, and Rupees
	Pseudocode:
	Create an array of ints that are unsorted
	Add them to a queue
	Try to dequeue
	Try to enqueue an element
	Add ints to a stack
	Try to pop
	Try to push an element
	Repeat above for a queue and stack of strings and a queue and stack of Rupees
	Exit
*/
#include "Rupee.h"
#include "Queue.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Lab 3: Queue1 by Santosh Lakshman and Gokul Nair\n";

	Queue<int> queue1 = Queue<int>();
	Stack<int> stack1 = Stack<int>();
	cout << "\nIntegers in the order in which they inserted into the queue and stack: " << endl;
	int* intArr[10];
	intArr[0] = new int(9);
	intArr[1] = new int(3);
	intArr[2] = new int(4);
	intArr[3] = new int(1);
	intArr[4] = new int(10);
	intArr[5] = new int(7);
	intArr[6] = new int(5);
	intArr[7] = new int(2);
	intArr[8] = new int(8);
	intArr[9] = new int(6);

	for (int i = 0; i < 10; i++) {
		cout << *intArr[i] << endl;
		queue1.enqueue(intArr[i]);
	}
	cout << "\nQueue front: " << *(queue1.front()) << endl;
	cout << "Queue rear: " << *(queue1.rear()) << endl;
	cout << "Dequeueing: " << queue1.dequeue() << endl;
	cout << "Queue front: " << *(queue1.front()) << endl;
	cout << "Queue rear: " << *(queue1.rear()) << endl;
	cout << "Enqueueing: 8" << endl;
	queue1.enqueue(intArr[8]);
	cout << "Queue front: " << *(queue1.front()) << endl;
	cout << "Queue rear: " << *(queue1.rear()) << endl;

	for (int i = 0; i < 10; i++) {
		stack1.push(intArr[i]);
	}
	cout << "\nStack top: " << *(stack1.peek()) << endl;
	cout << "Popping: " << stack1.pop() << endl;
	cout << "Stack top: " << *(stack1.peek()) << endl;
	cout << "Pushing: 7" << endl;
	stack1.push(intArr[5]);
	cout << "Stack top: " << *(stack1.peek()) << endl;

	Queue<string> queue2 = Queue<string>();
	Stack<string> stack2 = Stack<string>();
	cout << "\nStrings in the order in which they inserted into the queue and stack: " << endl;
	string* stringArr[10];
	stringArr[0] = new string("rabid");
	stringArr[1] = new string("volleyball");
	stringArr[2] = new string("dooorman");
	stringArr[3] = new string("king");
	stringArr[4] = new string("tree");
	stringArr[5] = new string("sweater");
	stringArr[6] = new string("drum");
	stringArr[7] = new string("baby");
	stringArr[8] = new string("asthma");
	stringArr[9] = new string("vamoos");

	for (int i = 0; i < 10; i++) {
		cout << *stringArr[i] << endl;
		queue2.enqueue(stringArr[i]);
	}
	cout << "\nQueue front: " << *(queue2.front()) << endl;
	cout << "Queue rear: " << *(queue2.rear()) << endl;
	cout << "Dequeueing: " << queue2.dequeue() << endl;
	cout << "Queue front: " << *(queue2.front()) << endl;
	cout << "Queue rear: " << *(queue2.rear()) << endl;
	cout << "Enqueueing: asthma" << endl;
	queue2.enqueue(stringArr[8]);
	cout << "Queue front: " << *(queue2.front()) << endl;
	cout << "Queue rear: " << *(queue2.rear()) << endl;

	for (int i = 0; i < 10; i++) {
		stack2.push(stringArr[i]);
	}
	cout << "\nStack top: " << *(stack2.peek()) << endl;
	cout << "Popping: " << stack2.pop() << endl;
	cout << "Stack top: " << *(stack2.peek()) << endl;
	cout << "Pushing: sweater" << endl;
	stack2.push(stringArr[5]);
	cout << "Stack top: " << *(stack2.peek()) << endl;

	Queue<Rupee> queue3 = Queue<Rupee>();
	Stack<Rupee> stack3 = Stack<Rupee>();
	cout << "\nRupees in the order in which they inserted into the queue and stack: " << endl;
	Rupee* rupeeArr[10];
	rupeeArr[0] = new Rupee(5, 23);
	rupeeArr[1] = new Rupee(3, 22);
	rupeeArr[2] = new Rupee(8, 65);
	rupeeArr[3] = new Rupee(9, 90);
	rupeeArr[4] = new Rupee(1, 17);
	rupeeArr[5] = new Rupee(2, 64);
	rupeeArr[6] = new Rupee(4, 32);
	rupeeArr[7] = new Rupee(8, 87);
	rupeeArr[8] = new Rupee(9, 55);
	rupeeArr[9] = new Rupee(2, 7);

	for (int i = 0; i < 10; i++) {
		cout << *rupeeArr[i] << endl;
		queue3.enqueue(rupeeArr[i]);
	}
	cout << "\nQueue front: " << *(queue3.front()) << endl;
	cout << "Queue rear: " << *(queue3.rear()) << endl;
	cout << "Dequeueing: " << queue3.dequeue() << endl;
	cout << "Queue front: " << *(queue3.front()) << endl;
	cout << "Queue rear: " << *(queue3.rear()) << endl;
	cout << "Enqueueing: Rupee 9 55 paise" << endl << endl;
	queue3.enqueue(rupeeArr[8]);
	cout << "Queue front: " << *(queue3.front()) << endl;
	cout << "Queue rear: " << *(queue3.rear()) << endl;

	for (int i = 0; i < 10; i++) {
		stack3.push(rupeeArr[i]);
	}
	cout << "\nStack top: " << *(stack3.peek()) << endl;
	cout << "Popping: " << stack3.pop() << endl;
	cout << "Stack top: " << *(stack3.peek()) << endl;
	cout << "Pushing: Rupee 2 64 paise" << endl << endl;
	stack3.push(rupeeArr[5]);
	cout << "Stack top: " << *(stack3.peek()) << endl;

	for (int* i : intArr) delete i;
	for (string* s : stringArr) delete s;
	for (Rupee* r : rupeeArr) delete r;
}
