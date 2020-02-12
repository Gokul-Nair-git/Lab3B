#pragma once
#include "SinglyLinkedList.h"
/*
	Lab 3: Queue1 by Santosh Lakshman and Gokul Nair
*/
template<class T>
class Stack : protected SinglyLinkedList<T> {
public:
	Stack();
	void push(T*);
	T pop();
	T* peek();
	bool empty();
};


/* Creates an empty Stack object.
 * Pre: None
 * Post: Inherited sort member is set to UNSORTED by default */
template<class T>
Stack<T>::Stack() {
	SinglyLinkedList<T>::sort = UNSORTED;
}


/* Adds a new value to the top of the stack
 * Pre: Stack exists
 * Post: A new element is added to the stack */
template<class T>
void Stack<T>::push(T* value) {
	SinglyLinkedList<T>::add(value);
}


/* Removes the top element from the stack and returns it
 * Pre: Stack exists
 * Post: Returns true if element is removed successfully */
template<class T>
T Stack<T>::pop() {
	T returnVal = *((SinglyLinkedList<T>::tail)->getVal());
	SinglyLinkedList<T>::remove(*((SinglyLinkedList<T>::tail)->getVal()));
	return returnVal;
}


/* Returns the value at the top of the stack
 * Pre: Stack exists
 * Post: Returns a pointer to the value in the tail node. */
template<class T>
T* Stack<T>::peek() {
	return (SinglyLinkedList<T>::tail)->getVal();
}


/* Returns if the Stack is empty or not.
 * Pre: Stack exists
 * Post: Returns false if the head pointer point to anything and true otherwise */
template<class T>
bool Stack<T>::empty() {
	return SinglyLinkedList<T>::tail == nullptr;
};



