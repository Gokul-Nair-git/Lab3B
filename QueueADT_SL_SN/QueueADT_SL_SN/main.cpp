#include "Rupee.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Lab 3: Linked List by Santosh Lakshman and Gokul Nair\n";

	Queue<int> list1 = Queue<int>();
	cout << "\nIntegers in the order in which they inserted into the queue: " << endl;
	int* intArr[10];
	intArr[0] = new int(9);
	intArr[1] = new int(3);
	intArr[2] = new int(4);
	intArr[3] = new int(1);
	intArr[4] = new int(6);
	intArr[5] = new int(7);
	intArr[6] = new int(5);
	intArr[7] = new int(2);
	intArr[8] = new int(8);
	intArr[9] = new int(6);
	for (int i = 0; i < 10; i++) {
		cout << *intArr[i] << endl;
		list1.enqueue(intArr[i]);
	}
	cout << "Queue front: " << *(list1.front()) << endl;
	cout << "Queue rear: " << *(list1.rear()) << endl;
}
