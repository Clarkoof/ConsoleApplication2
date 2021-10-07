// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <stdint.h>
#include <iomanip>
int main()
{
	
	std::string Letters = "sdfsdgffgf";
	std::cout << Letters << "\n";
	std::cout << Letters.length() << "\n";
	char last = Letters[Letters.length() - 1];
	std::cout << last << "\n";
	char first = Letters[0];
	std::cout << first;

	std::cin;
	return 0;
}