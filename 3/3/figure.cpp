#include "figure.h"


void figure::SetSideCount(int sideCount)
{
	this->sidesCount = sideCount;
};
 
void figure::print_info()
{
	bool b  = this->check();
	std::cout << figureName << ":" << std::endl;
	if (b) std::cout << "����������";
	else std::cout  << "������������";
	std::cout << std::endl
		<< "���������� ������: " << sidesCount
		<< std::endl;
};

bool figure::check()
{
	bool c = f;
	if((sidesCount == 0) && (figureName == "������")) c = t;
	return c;
};