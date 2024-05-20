#include "Stroka.h"


Stroka::Stroka(char* string)
{
	strcpy_s(str, string);
}
Stroka::Stroka(int size)
{
	/*ch3 = new char[size];
	for (int i = 0; i < size; i++)
	{
		ch3[i] = i;
		std::cout << ch3[i] << std::endl;
	}*/
	
}

Stroka::Stroka(const Stroka& s)
{
	strcpy_s(str, s.str);
}

Stroka& Stroka::operator=(const Stroka& s)
{
	strcpy_s(str, s.str);
	return *this;
}
Stroka& Stroka::operator+(const Stroka& s)
{
	strcpy_s(str, s.str);
	return *this;
}

int Stroka::operator==(const Stroka& s)
{
	if ((strcmp(str, s.str)) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Stroka::dlina()
{
	return strlen(str);
}

void Stroka::vvod()
{
	std::cin >> str;
}

void Stroka::vivod()
{
	std::cout << str << std::endl;
}


