#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Header.h"



int main(){
	build();
	std::cout << "Welcome to the Giant Translator." << std::endl;
	while (running){
		std::cout << "The current data bank contains " << wordCount << " words.\nWould you like to translate, write, or print?\nOr enter no to exit program: ";
		std::getline(std::cin, choice);
		if (choice == "write"){
			write();
			build();
		}
		else if (choice == "translate"){
			translate();
			build();
		}
		else if (choice == "print"){
			print();
			build();
		}
		else if (choice == "no")
			running = false;
		else
			std::cout << "Error: Input Valid Answer" << std::endl;
		std::cout << "\n\n";
	}
}