#include <iostream>
#include <string>

int main()
{
	int totalD, can1V, can2V, can3V;
	double can1P, can2P, can3P;
	std::cout << "Welcome to Political Fever" << std::endl;
	std::cout << "Input the total number of delegates: ";
	std::cin >> totalD;
	std::cout << "Input the percentage of votes candidate 1 got: ";
	std::cin >> can1P;
	std::cout << "Input the percentage of votes candidate 2 got: ";
	std::cin >> can2P;
	can3P =  100 - (can1P + can2P);
	can1V = totalD * (can1P / 100);
	can2V = totalD * (can2P / 100);
	can3V = totalD * (can3P / 100);
	if (can1P < 15){
		can2V = can2V + (can1V / 2);
		can3V = can3V + (can1V / 2);
		can1V = 0;
	}
	if (can2P < 15){
		can1V = can1V + (can2V / 2);
		can3V = can3V + (can2V / 2);
		can2V = 0;
	}
	if (can3P < 15){
		can1V = can1V + (can3V / 2);
		can2V = can2V + (can3V / 2);
		can3V = 0;
	}
	if (can1P > 50){
		can2V = 0;
		can3V = 0;
		can1V = totalD;
	}
	if (can2P > 50){
		can1V = 0;
		can3V = 0;
		can2V = totalD;
	}
	if (can3P > 50){
		can2V = 0;
		can2V = 0;
		can3V = totalD;
	}
	std::cout << "Candidate 1 recieved " << can1V << " delegates." << std::endl;
	std::cout << "Candidate 2 recieved " << can2V << " delegates." << std::endl;
	std::cout << "Candidate 3 recieved " << can3V << " delegates." << std::endl;
}