#include <iostream>
#include <string>

int main(){
	int num;
	std::cout << "Welcome to Fizz Buzz Woof" << std::endl;
	std::cout << "Input a number: ";
	std::cin >> num;

	for (int i = 0; i <= num; i = i + 1){
		if (i > 2 && (i % 3) == 0)
			std::cout << "\nFizz";
		else if (i > 4 && (i % 5) == 0)
			std::cout << "Buzz";
		else if (i > 6 && (i % 7) == 0)
			std::cout << "Woof";
		else
			std::cout << "\n" << i << std::endl;
	}
}