// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
#include <random> 
#include <ctime>
#include <algorithm>
#include <stack>

int main()
{
	stack<int> s2;
	Stack s1;
	mt19937 generator_number; //��������� �����
	uniform_int_distribution<> diapozon_number(0, 10); //��������
	for (int i = 0; i <= 10 ; i++) { //�������� ������ �� ������� �����
		s1.push(diapozon_number(generator_number));
		cout << "1: " << s1.pop() << endl;
	}
	cout << "Two steck:" << '\n';
	for (int i = 0; i <= 10; i++) {
		s2.push(diapozon_number(generator_number));
	}

	system("pause");
    return 0;
}

