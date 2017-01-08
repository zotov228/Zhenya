#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
	enum { MAX = 10 };
	int st[MAX]; //стек в виде массива
	int top;
	int max = 0;
public:
	Stack(){ //конструктор
		top = 0;
	}
	void push(int var) { //помещеие в стек
		st[++top] = var;
	}
	int pop() { //взять из стека
		return st[top--];
	}
};

