#include <iostream>
#include <string>
#include "order.cpp"

int order(int item){
	int itemsOrdered = 0;
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


int main(){
	const double sales_tax = 0.07;
	double price[11] {0.99, 1.39, 1.59, 1.89, 1.99, 2.19, 2.39, 2.59, 5.99, 2.49, 1.79};
	int bought[11] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int itemN;
	double subTotal = 0, taxTotal, finalTotal;
	bool ordering = true;

	std::cout << "Welcome to Delgados Tacos" << std::endl;
	std::cout << "How can I help you?" << std::endl;
	std::cout << "\nPrice List:" << std::endl;
	std::cout << "#1 Taco: $" << price[0] << std::endl;
	std::cout << "#2 Bean Burrito: $" << price[1] << std::endl;
	std::cout << "#3 Beef Burrito: $" << price[2] << std::endl;
	std::cout << "#4 Steak Burrito: $" << price[3] << std::endl;
	std::cout << "#5 Average Burrito: $" << price[4] << std::endl;
	std::cout << "#6 Pretty Good Burrito: $" << price[5] << std::endl;
	std::cout << "#7 Superb Burrito: $" << price[6] << std::endl;
	std::cout << "#8 Supreme Burrito: $" << price[7] << std::endl;
	std::cout << "$9 Supreme Extreme Deluxe Burrito: $" << price[8] << std::endl;
	std::cout << "#10 Nachos: $" << price[9] << std::endl;
	std::cout << "#11 Soft Drink: $" << price[10] << std::endl;


	while (ordering){
		for (int n2 = 0; n2<11; ++n2)
			subTotal = subTotal + (price[n2] * bought[n2]);
		std::cout << "\n\nWhat can I get for you?" << std::endl;
		std::cout << "Or if you're done ordering enter 0" << std::endl;
		std::cout << "Here is your running total: $" << subTotal << std::endl;
		std::cout << "Enter an item number from above: ";
		std::cin >> itemN;;
		if (itemN == 0)
			ordering = false;
		if (itemN > 11)
			std::cout << "Error" << std::endl;
		bought[(itemN - 1)] = order(itemN);
	}

	for (int n2 = 0; n2<11; ++n2)
		subTotal = subTotal + (price[n2] * bought[n2]);
	taxTotal = subTotal * sales_tax;
	finalTotal = subTotal + taxTotal;

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHere is your reciept." << std::endl;
	std::cout << "Thank you for visiting Delgado's Tacos" << std::endl;
	std::cout << "Please come again." << std::endl;
	std::cout << "Tacos: " << bought[0] << std::endl;
	std::cout << "Bean Burritos: " << bought[1] << std::endl;
	std::cout << "Beef Burritos: " << bought[2] << std::endl;
	std::cout << "Steak Burritos: " << bought[3] << std::endl;
	std::cout << "Average Burritos: " << bought[4] << std::endl;
	std::cout << "Pretty Good Burritos: " << bought[5] << std::endl;
	std::cout << "Superb Burritos: " << bought[6] << std::endl;
	std::cout << "Supreme Burritos: " << bought[7] << std::endl;
	std::cout << "Supreme Extreme Deluxe Burritos: " << bought[8] << std::endl;
	std::cout << "Nachos: " << bought[9] << std::endl;
	std::cout << "Soft Drinks: " << bought[10] << std::endl;
	std::cout << "\nSub Total: $" << subTotal << std::endl;
	std::cout << "Sales Tax: $" << taxTotal << std::endl;
	std::cout << "Total: $" << finalTotal << std::endl;
	system("pause");
}