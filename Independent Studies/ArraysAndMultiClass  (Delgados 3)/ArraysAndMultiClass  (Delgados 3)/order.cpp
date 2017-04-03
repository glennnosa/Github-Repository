#include <iostream>
#include <string>

int order(int item){
		int itemsOrdered;
		if (item == 1){
			std::cout << "How many Tacos would you like? ";
			std::cin >> itemsOrdered;
	}
		if (item == 2){
			std::cout << "How many Bean Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 3){
			std::cout << "How many Beef Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 4){
			std::cout << "How many Steak Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 5){
			std::cout << "How many Average Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 6){
			std::cout << "How many Pretty Good Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 7){
			std::cout << "How many Superb Burritos would you like? ";
			std::cin >> itemsOrdered;		
		}
		if (item == 8){
			std::cout << "How many Supreme Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 9){
			std::cout << "How many Supreme Extreme Deluxe Burritos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 10){
			std::cout << "How many Nachos would you like? ";
			std::cin >> itemsOrdered;
		}
		if (item == 11){
			std::cout << "How many Drinks would you like? ";
			std::cin >> itemsOrdered;
		}
		return itemsOrdered;
}