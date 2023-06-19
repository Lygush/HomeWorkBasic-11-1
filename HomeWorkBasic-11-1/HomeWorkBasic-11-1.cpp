#include <iostream>
#include <Windows.h>
#include "Hellow.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "¬ведите им€: ";
	std::string name{};
	std::cin >> name;
	Greeter g;
	std::cout << g.greeter(name);
}