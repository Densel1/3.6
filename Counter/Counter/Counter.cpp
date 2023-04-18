#include <iostream>
#include <windows.h>
#include <conio.h>
#include "counter1.h"

int main()
{
	setlocale(LC_ALL, "Russian");
//	SetConsoleOutputCP(1251);
	system("chcp 1251");
	std::string sUserInput;
	int nUserInput;
	do {
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		std::cin >> sUserInput;
	} while ((sUserInput != "да") && (sUserInput != "нет"));
	
	if (sUserInput == "да")
	{
		do {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> nUserInput;
		} while (nUserInput < 0);
		counter1 Counter(nUserInput);
	}
	else nUserInput = 1;
	counter1 Counter(nUserInput);

	char c;
	do {
		std::cout << "Введите команду ('+', '-', '=', или 'X'): ";
		c = _getch();
		switch (c)
		{
		case '+':
			Counter.inc();
			std::cout << "+";
			break;
		case '-':
			Counter.dec();
			std::cout << "-";
			break;
		case '=':
			std::cout << "=" << std::endl << Counter.getValue();
			break;
		default:
				std::cout << c;
		}
		std::cout << std::endl;
	} while ((c != 'X') && (c != 'Х'));
	std::cout << "До свидания!";
}