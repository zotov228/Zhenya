#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
	enum { MAX = 10 };
	int st[MAX]; //���� � ���� �������
	int top;
	int max = 0;
public:
	Stack(){ //�����������
		top = 0;
	}
	void push(int var) { //�������� � ����
		st[++top] = var;
	}
	int pop() { //����� �� �����
		return st[top--];
	}
};

