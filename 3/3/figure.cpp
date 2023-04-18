#include "figure.h"


void figure::SetSideCount(int sideCount)
{
	this->sidesCount = sideCount;
};
 
void figure::print_info()
{
	bool b  = this->check();
	std::cout << figureName << ":" << std::endl;
	if (b) std::cout << "Правильная";
	else std::cout  << "Неправильная";
	std::cout << std::endl
		<< "Количество сторон: " << sidesCount
		<< std::endl;
};

bool figure::check()
{
	bool c = f;
	if((sidesCount == 0) && (figureName == "Фигура")) c = t;
	return c;
};