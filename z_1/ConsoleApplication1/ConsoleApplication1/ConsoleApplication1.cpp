// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	mt19937 generator_number; //рандомные числа
	uniform_int_distribution<> diapozon_number(0, 10); //диапозон
	for (int i = 0; i <= 10 ; i++) { //диапозон берётся от массива стека
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

