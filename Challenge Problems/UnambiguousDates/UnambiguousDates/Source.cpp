#include <iostream>
#include <string>

int main()
{
	int n1, n2, n3;
	std::cout << "Welcome to My Date Translator" << std::endl;
	std::cout << "Input the first number: ";
	std::cin >> n1;
	std::cout << "Input the second number: ";
	std::cin >> n2;
	std::cout << "Input the third number: ";
	std::cin >> n3;
	if (n1 > 31 && n2 < 13 && n3 < 32 && n3 > 12) //1y 2m 3d
		std::cout << "Unambiguous" << std::endl;
	else if (n1 > 31 && n3 < 13 && n2 < 32 && n2 > 12) //1y 2d 3m
		std::cout << "Unambiguous" << std::endl;
	else if (n2 > 31 && n1 < 13 && n3 < 32 && n3 > 12) //1m 2y 3d
		std::cout << "Unambiguous" << std::endl;
	else if (n3 > 31 && n1 < 13 && n2 < 32 && n2 > 12) //1m 2d 3y
		std::cout << "Unambiguous" << std::endl;
	else if (n2 > 31 && n3 < 13 && n1 < 32 && n1 > 12) //1d 2y 3m
		std::cout << "Unambiguous" << std::endl;
	else if (n3 > 31 && n2 < 13 && n1 < 32 && n1 > 12) //1d 2m 3y
		std::cout << "Unambiguous" << std::endl;
	else
		std::cout << "Ambiguous" << std::endl;
	return 0;
}