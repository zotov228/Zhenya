// z_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stack"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	stack<int> s1;
	stack<int> side_stack;
	stack<int> s2;
	stack<int> end_stack;
	int k = 0;
	cout << "One stack" << '\n';

	for (int i = 0; i <= 10; i++) {
		s1.push(k = rand()%10+1);
		cout << k << ' ';
	}
	cout << '\n';
	int min, tek;
	while (!s1.empty()) {
		min = s1.top();
		s1.pop();
		side_stack.push(min);
		while (!s1.empty())
		{
			tek = s1.top();
			s1.pop();
			if (tek < min)min = tek;
			side_stack.push(tek);
		}
		while (!side_stack.empty()) {
			tek = side_stack.top();
			side_stack.pop();
			if (tek == min) s2.push(tek);
			else s1.push(tek);
		}
	}
	cout << "Отсорцированный: " << '\n';
	while (!s2.empty())
	{
		cout << s2.top() << " ";
		s2.pop();
	}
	cout << '\n';
	cout << "Ответ на все ваши вопросы =)" << '\n';
	for (int i = 0; i <= 10; i++) {
		end_stack.push(k = rand() % tek);
		cout << k << ' ';
	}
	cout << '\n';
	system("pause");
    return 0;
}

