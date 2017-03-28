#include <iostream>
#include <string>

int main()
{
	int num1, num2;
	int add, sub, mult, div, mod;
	std::string name;

	std::cout << "Whomst'd'sd'ts'sds'dsds'dds arst thou? ";
	std::cin >> name;

	std::cout << "Enter thine first numeral: ";
	std::cin >> num1;

	std::cout << "Enter thine second numeral: ";
	std::cin >> num2;

	add = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;

	std::cout << "Thine first number plus thine second number equals " << add << std::endl;
	std::cout << "Thine first number minus thine second number equals " << sub<< std::endl;
	std::cout << "Thine first number times thine second number equals " << mult << std::endl;
	std::cout << "Thine first number divided by thine second number equals " << div << std::endl;
	std::cout << "Thine first number divided by thine second number has a remainder of " << mod << std::endl;
	std::cout << "Thee hath thine eternal gratitude " << name << std::endl;
	return 0;
}