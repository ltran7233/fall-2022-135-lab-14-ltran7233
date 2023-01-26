#include <iostream>
#include "vector.h"

template <class V>
MyVector<V>::MyVector(){
	arr = new T[5];
	vsize = 0;
	vcapacity = 5;
}

template <class V>
int MyVector<V>::size(){
	return vsize;
}

template <class V>
int MyVector<V>::capacity(){
	return vcapacity;
}

template <class V>
bool MyVector<V>::empty(){
	bool check = false;
	if (vsize==0)
	{
		check = true;
	}
	return check;
}

template <class V>
void MyVector<V>::push_back(T item){
	if (vsize==vcapacity)
	{
		T temp = new T[vsize+1];
		vcapacity++;
		for (int i=0; i<vsize; i++)
		{
			temp[i] = arr[i];
		}
		temp[vsize] = item;
		vsize++;
		delete[] arr;
		arr = temp;
		delete[] temp;
		temp = nullptr;
	}
	else
	{
		arr[vsize] = item;
		vsize++;
	}
}

template <class V>
void MyVector<V>::pop_back(int n){
	T temp = new T[vsize-n];
	for (int i=0; i<vsize-n; i++)
	{
		temp[i] = arr[i];
	}
	vsize -= n;
	delete[] arr;
	arr = temp;
	delete[] temp;
	temp = nullptr;
}

template <class V>
void MyVector<V>::pop_back(){
	T temp = new T[vsize-1];
	for (int i=0; i<vsize-1; i++)
	{
		temp[i] = arr[i];
	}
	vsize--;
	delete[] arr;
	arr = temp;
	delete[] temp;
	temp = nullptr;
}

template <class V>
void MyVector<V>::clear(){
	arr = new T[5];
	vsize = 0;
	vcapacity = 5;
}

template <class V>
V &MyVector<V>::operator[] (int i){
	return arr[i];
}
