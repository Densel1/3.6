// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "sum.h"
#include "divide.h"
#include "minus.h"
#include "mult.h"
#include "power.h"

using namespace std;


void print(const uint8_t c, float num1, float num2)
{
//	if (c > 5) return;
	cout << num1;
	switch (c)
	{
	case '1':
		cout << " плюс " << num2 << " = " << sum(num1, num2) << endl;
		break;
	case '2':
		cout << " минус " << num2 << " = " << minus1(num1, num2) << endl;
		break;
	case '3':
		cout << " умножить " << num2 << " = " << mult(num1, num2) << endl;
		break;
	case '4':
		cout << " разделить " << num2 << " = " << divide(num1, num2) << endl;
			break;
	case '5':
		cout << " в степени " << num2 << " = " << power(num1, num2) << endl;
			break;
	default : 
		cout << "Unknown number: " << c;
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	float 
		num1, num2;
    uint8_t c = 0;
	
	do {
		do {
			cout << "Введите первое число: ";
			cin >> num1;
		} while (0);
		do {
			cout << "Введите второе число: ";
			cin >> num2;
		} while (0);
		do {
			cout << "Введите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
			cin >> c;
		} while (0);
		// - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false

		print(c, (num1), (num2));

	} while (true);
}
