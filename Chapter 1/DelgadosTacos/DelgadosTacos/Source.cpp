//Delgados Tacos
//Glenn Nosa
//3/30/17

#include <iostream>
#include <string>

int main()
{
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
	double subTotal, taxTotal, finalTotal;
	int tacoB, beanB, beefB, steakB, avgB, goodB, superbB, supremeB, extrB, nachoB, drinkB;


	std::cout << "Welcome to Delgados Tacos" << std::endl;
	std::cout << "How can I help you?" << std::endl;
	std::cout << "\nPrice List:" << std::endl;
	std::cout << "Taco: $" << tacoP << std::endl;
	std::cout << "Bean Burrito: $" << beanP << std::endl;
	std::cout << "Beef Burrito: $" << beefP << std::endl;
	std::cout << "Steak Burrito: $" << steakP << std::endl;
	std::cout << "Average Burrito: $" << avgP << std::endl;
	std::cout << "Pretty Good Burrito: $" << goodP << std::endl;
	std::cout << "Superb Burrito: $" << superbP << std::endl;
	std::cout << "Supreme Burrito: $" << supremeP << std::endl;
	std::cout << "Supreme Extreme Deluxe Burrito: $" << extrP << std::endl;
	std::cout << "Nachos: $" << nachoP << std::endl;
	std::cout << "Soft Drink: $" << drinkP << std::endl;

	std::cout << "\n\nHow many Tacos would you like?  ";
	std::cin >> tacoB;
	std::cout << "How many Bean Burritos would you like?  ";
	std::cin >> beanB;
	std::cout << "How many Beef Burritos would you like?  ";
	std::cin >> beefB;
	std::cout << "How many Steak Burritos would you like?  ";
	std::cin >> steakB;
	std::cout << "How many Average Burritos would you like?  ";
	std::cin >> avgB;
	std::cout << "How many Pretty Good Burritos would you like?  ";
	std::cin >> goodB;
	std::cout << "How many Superb Burritos would you like?  ";
	std::cin >> superbB;
	std::cout << "How many Supreme Burritos would you like?  ";
	std::cin >> supremeB;
	std::cout << "How many Supreme Extreme Deluxe Burritos would you like?  ";
	std::cin >> extrB;
	std::cout << "How many Nachos would you like?  ";
	std::cin >> nachoB;
	std::cout << "How many Drinks would you like?  ";
	std::cin >> drinkB;

	subTotal = (tacoB * tacoP) + (beanB * beanP) + (beefB * beefP) + (steakB * steakP) + (avgB * avgP) + (goodB * goodP) + (superbB * superbP) + (supremeB * supremeP) +  (extrB * extrP) + (nachoB * nachoP) + (drinkB * drinkP);
	taxTotal = subTotal * sales_tax;
	finalTotal = subTotal + taxTotal;

	long double cardN, SSN;
	int secN, pinN, expM, expY;
	std::cout << "\n\nSub Total: $" << subTotal << std::endl;
	std::cout << "Sales Tax: $" << taxTotal << std::endl;
	std::cout << "Total: $" << finalTotal << std::endl;
	std::cout << "\nIn order to pay please enter required info." << std::endl;
	std::cout << "Please Enter your Credit Card Number: ";
	std::cin >> cardN;
	std::cout << "Please Enter your Credit Card Security Code on the Back: ";
	std::cin >> secN;
	std::cout << "Please Enter your Credit Card Pin Number: ";
	std::cin >> pinN;
	std::cout << "Please Enter your Credit Card Expiration Month: ";
	std::cin >> expM;
	std::cout << "Please Enter your Credit Card Expiration Year: ";
	std::cin >> expY;
	std::cout << "Please Enter your Social Security Number: ";
	std::cin >> SSN;


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
	std::cout << "\nCredit Card Number: " << cardN << std::endl;
	std::cout << "Security Code: " << secN << std::endl;
	std::cout << "Pin Number: " << pinN << std::endl;
	std::cout << "Expiration Date: " << expM << "/" << expY << std::endl;
	std::cout << "Social Security Number: " << SSN << std::endl;
}