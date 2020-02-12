#include "Rupee.h"
#include "Queue.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Lab 3: Queue1 by Santosh Lakshman and Gokul Nair\n";

	Queue<int> queue1 = Queue<int>();
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
	cout << "Queue front: " << *(queue1.front()) << endl;
	cout << "Queue rear: " << *(queue1.rear()) << endl;
	queue1.dequeue();
	cout << "Queue front: " << *(queue1.front()) << endl;
	cout << "Queue rear: " << *(queue1.rear()) << endl;

	Stack<int> stack1 = Stack<int>();
	for (int i = 0; i < 10; i++) {
		stack1.push(intArr[i]);
	}
	cout << "Stack top: " << *(stack1.peek()) << endl;
	cout << "Popping: " << stack1.pop() << endl;
	cout << "Stack top: " << *(stack1.peek()) << endl;

}
