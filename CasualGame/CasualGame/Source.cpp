#include <iostream>
#include <string>


int main(){
	int currencyValue = 1;
	while (currencyValue > 0){
		std::cout << "Current Blemshark Currency Value: $" << currencyValue << "\nChange this value to: ";
		std::cin >> currencyValue;
	}
	std::cout << "You have collapsed the government." << std::endl;
}