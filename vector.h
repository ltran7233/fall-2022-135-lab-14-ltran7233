#pragma once

template <class V>
class MyVector{
public:
	MyVector();
	int size();
	int capacity();
	bool empty();
	void push_back(V item);
	void pop_back(int n);
	void pop_back();
	void clear();
	V &operator[] (int i);
private:
	V *arr;
	int vsize;
	int vcapacity;
};

#include "vector.cxx"
