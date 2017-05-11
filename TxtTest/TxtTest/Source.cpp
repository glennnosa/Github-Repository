#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>

int main(){
	std::string choice, word;
	std::fstream file;
	bool running = true;
	bool notDone = true;

	while (running){
		std::cout << "Read or Write: ";
		std::getline(std::cin, choice);
		if (choice == "read"){
			file.open("text.txt");
			while (notDone) {
					word = file.getline();
					std::cout << word << "\n" << std::endl;
					word.clear();
					if (file.eof())
						notDone = false;
			}
		}
		else if (choice == "write"){

		}
		else
			running = false;
	}
}