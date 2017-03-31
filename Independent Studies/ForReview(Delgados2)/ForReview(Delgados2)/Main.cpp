#include <iostream>
#include <string>

int main(){
	const double sales_tax = 0.07;
	double tacoP = 0.99;
	double beanP = 1.39;
	double beefP = 1.59;
	double steakP = 1.89;
	double avgP = 1.99;
	double goodP = 2.19;
	double superbP = 2.39;
	double supremeP = 2.59;
	double extrP = 5.99;
	double nachoP = 2.49;
	double drinkP = 1.79;
	double subTotal = 0, taxTotal, finalTotal;
	int itemNumber, itemsOrdered, tacoB = 0, beanB = 0, beefB = 0, steakB = 0, avgB = 0, goodB = 0, superbB = 0, supremeB = 0, extrB = 0, nachoB = 0, drinkB = 0;
	bool ordering = true;


	std::cout << "Welcome to Delgados Tacos" << std::endl;
	std::cout << "How can I help you?" << std::endl;
	std::cout << "\nPrice List:" << std::endl;
	std::cout << "#1 Taco: $" << tacoP << std::endl;
	std::cout << "#2 Bean Burrito: $" << beanP << std::endl;
	std::cout << "#3 Beef Burrito: $" << beefP << std::endl;
	std::cout << "#4 Steak Burrito: $" << steakP << std::endl;
	std::cout << "#5 Average Burrito: $" << avgP << std::endl;
	std::cout << "#6 Pretty Good Burrito: $" << goodP << std::endl;
	std::cout << "#7 Superb Burrito: $" << superbP << std::endl;
	std::cout << "#8 Supreme Burrito: $" << supremeP << std::endl;
	std::cout << "$9 Supreme Extreme Deluxe Burrito: $" << extrP << std::endl;
	std::cout << "#10 Nachos: $" << nachoP << std::endl;
	std::cout << "#11 Soft Drink: $" << drinkP << std::endl;

	while (ordering){
		std::cout << "\n\nWhat can I get for you?" << std::endl;
		std::cout << "Or if you're done ordering enter 0" << std::endl;
		std::cout << "Here is your running total: $" << subTotal << std::endl;
		std::cout << "Enter an item number from above: ";
		std::cin >> itemNumber;
		itemsOrdered = 0;
		if (itemNumber == 0)
			ordering = 0;
		if (itemNumber == 1){
			std::cout << "How many Tacos would you like? ";
			std::cin >> itemsOrdered;
			tacoB = itemsOrdered + tacoB;
		}
		if (itemNumber == 2){
			std::cout << "How many Bean Burritos would you like? ";
			std::cin >> itemsOrdered;
			beanB = itemsOrdered + beanB;
		}
		if (itemNumber == 3){
			std::cout << "How many Beef Burritos would you like? ";
			std::cin >> itemsOrdered;
			beefB = itemsOrdered + beefB;
		}
		if (itemNumber == 4){
			std::cout << "How many Steak Burritos would you like? ";
			std::cin >> itemsOrdered;
			steakB = itemsOrdered + steakB;
		}
		if (itemNumber == 5){
			std::cout << "How many Average Burritos would you like? ";
			std::cin >> itemsOrdered;
			avgB = itemsOrdered + avgB;
		}
		if (itemNumber == 6){
			std::cout << "How many Pretty Good Burritos would you like? ";
			std::cin >> itemsOrdered;
			goodB = itemsOrdered + goodB;
		}
		if (itemNumber == 7){
			std::cout << "How many Superb Burritos would you like? ";
			std::cin >> itemsOrdered;
			superbB = itemsOrdered + superbB;
		}
		if (itemNumber == 8){
			std::cout << "How many Supreme Burritos would you like? ";
			std::cin >> itemsOrdered;
			supremeB = itemsOrdered + supremeB;
		}
		if (itemNumber == 9){
			std::cout << "How many Supreme Extreme Deluxe Burritos would you like? ";
			std::cin >> itemsOrdered;
			extrB = itemsOrdered + extrB;
		}
		if (itemNumber == 10){
			std::cout << "How many Nachos would you like? ";
			std::cin >> itemsOrdered;
			nachoB = itemsOrdered + nachoB;
		}
		if (itemNumber == 11){
			std::cout << "How many Drinks would you like? ";
			std::cin >> itemsOrdered;
			drinkB = itemsOrdered + drinkB;
		}
		if (itemNumber > 11)
			std::cout << "Error please input valid number" << std::endl;
	subTotal = (tacoB * tacoP) + (beanB * beanP) + (beefB * beefP) + (steakB * steakP) + (avgB * avgP) + (goodB * goodP) + (superbB * superbP) + (supremeB * supremeP) + (extrB * extrP) + (nachoB * nachoP) + (drinkB * drinkP);
	taxTotal = subTotal * sales_tax;
	finalTotal = subTotal + taxTotal;
}

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHere is your reciept." << std::endl;
	std::cout << "Thank you for visiting Delgado's Tacos" << std::endl;
	std::cout << "Please come again." << std::endl;
	std::cout << "\nItems ordered: " << (tacoB + beanB + beefB + steakB + avgB + goodB + superbB + supremeB + extrB + nachoB + drinkB) << std::endl;
	std::cout << "Tacos: " << tacoB << std::endl;
	std::cout << "Bean Burritos: " << beanB << std::endl;
	std::cout << "Beef Burritos: " << beefB << std::endl;
	std::cout << "Steak Burritos: " << steakB << std::endl;
	std::cout << "Average Burritos: " << avgB << std::endl;
	std::cout << "Pretty Good Burritos: " << goodB << std::endl;
	std::cout << "Superb Burritos: " << superbB << std::endl;
	std::cout << "Supreme Burritos: " << supremeB << std::endl;
	std::cout << "Supreme Extreme Deluxe Burritos: " << extrB << std::endl;
	std::cout << "Nachos: " << nachoB << std::endl;
	std::cout << "Soft Drinks: " << drinkB << std::endl;
	std::cout << "\nSub Total: $" << subTotal << std::endl;
	std::cout << "Sales Tax: $" << taxTotal << std::endl;
	std::cout << "Total: $" << finalTotal << std::endl;
	return 0;
}