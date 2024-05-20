#pragma once
#include <cstring>
#include <iostream>
class Stroka
{
	char str[80];

private:
	char* ch3;

	
	
public:
	Stroka(char*);
	Stroka() {

	}
	Stroka(int size);
	Stroka(const Stroka&);
	~Stroka() {
		std::cout << " Запустился деструктор" << std::endl;
		delete[] ch3;
	}
	Stroka& operator = (const Stroka&);
	Stroka& operator+(const Stroka&);
	int operator==(const Stroka&);
	int dlina();
	void vvod();
	void vivod();
};



