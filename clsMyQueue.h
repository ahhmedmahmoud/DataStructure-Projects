#pragma once
#include <iostream>
#include "clsDoubleLinkedList.h"
using namespace std;
template  <class T>
class clsMyQueue
{
protected: 
	clsDoubleLinkedList <T> _MyList;

public:
	// Last In First Out (LIFO) operations
	void Push(T Item) {
		return _MyList.InsertAtEnd(Item);
	}

	void Pop() {
		return _MyList.DeleteFirstNode();
	}

	void Print() {
		return _MyList.PrintList();
	}

	bool IsEmpty() {
		return _MyList.IsEmpty();
	}
	void Clear() {
		return _MyList.Clear();
	}

	int Size() {
		return _MyList.Size();
	}
	T Front() {
		return _MyList.GetItem(0);
	}
	T Back() {
		return _MyList.GetItem(_MyList.Size() - 1);
	}

	void Reverse() {
		return _MyList.Reverse();
	}

	T GetItem(int Index) {
		return _MyList.GetItem(Index);
	}

	int UpdateItem(int Index , T newValue) {
		return _MyList.UpdateItem(Index, newValue);
	}

	int InsertAfter(int Index, T newValue) {
		return _MyList.InsertAfter(Index, newValue);
	}
	void InsertAtFront(T Value) {
		return _MyList.InsertAtBeginning(Value);
	}
	void InsertAtBack(T Value) {
		return _MyList.InsertAtEnd(Value);
	}
};

