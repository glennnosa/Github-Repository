#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string choice, eng, spn, fre, ger;
std::ofstream myfile;
std::ifstream inFile;
char x;
int wordCount = 0;
std::string word;
std::string input;
std::string array[4][999] = {};
bool notDone = true;
bool wrt = true;
bool running = true;

int main(){
	while (running){
		inFile.open("translator.txt");
		while (notDone) {
			int i = 0;
			while (i < 4 && notDone){
				x = inFile.get();
				if (inFile.eof())
					notDone = false;
				if (x == '|' || x == '\n' && notDone){
					array[i][wordCount] = word;
					word.clear();
					i = i + 1;
				}
				else
					word = word + x;
				if (x == '\n')
					wordCount = wordCount + 1;
			}
		}
		std::cout << "Welcome to the Giant Translator.\nThe current data bank contains " << wordCount << " words.\nWould you like to translate or write: ";
		std::getline(std::cin, choice);
		if (choice == "write"){
			while (wrt){
				myfile.open("translator.txt", std::ios_base::app);
				std::cout << "Input a word in English: ";
				std::getline(std::cin, eng);
				std::cout << "Spanish: ";
				std::getline(std::cin, spn);
				std::cout << "French: ";
				std::getline(std::cin, fre);
				std::cout << "German: ";
				std::getline(std::cin, ger);
				myfile << eng << "|" << spn << "|" << fre << "|" << ger << "\n";
				myfile.close();
				std::cout << "Would you like to do another? ";
				std::getline(std::cin, choice);
				if (choice == "no")
					wrt = false;
			}
		}
		else if (choice == "translate"){
			while (choice != "no"){
				std::cout << "Input a word in English, Spanish, French, or German to translate: ";
				std::getline(std::cin, input);
				bool wordFound = false;
				for (int i = 0; i <= wordCount; i++){
					if (input == array[0][i]){
						wordFound = true;
						std::cout << "English: " << array[0][i] << std::endl;
						std::cout << "Spanish: " << array[1][i] << std::endl;
						std::cout << "French: " << array[2][i] << std::endl;
						std::cout << "German: " << array[3][i] << std::endl;
					}
				}
				for (int i = 0; i <= wordCount; i++){
					if (input == array[1][i] && !wordFound){
						wordFound = true;
						std::cout << "English: " << array[0][i] << std::endl;
						std::cout << "Spanish: " << array[1][i] << std::endl;
						std::cout << "French: " << array[2][i] << std::endl;
						std::cout << "German: " << array[3][i] << std::endl;
					}
				}
				for (int i = 0; i <= wordCount; i++){
					if (input == array[2][i] && !wordFound){
						wordFound = true;
						std::cout << "English: " << array[0][i] << std::endl;
						std::cout << "Spanish: " << array[1][i] << std::endl;
						std::cout << "French: " << array[2][i] << std::endl;
						std::cout << "German: " << array[3][i] << std::endl;
					}
				}
				for (int i = 0; i <= wordCount; i++){
					if (input == array[3][i] && !wordFound){
						wordFound = true;
						std::cout << "English: " << array[0][i] << std::endl;
						std::cout << "Spanish: " << array[1][i] << std::endl;
						std::cout << "French: " << array[2][i] << std::endl;
						std::cout << "German: " << array[3][i] << std::endl;
					}
				}
				if (!wordFound)
					std::cout << "Word not found." << std::endl;
				std::cout << "Do another? ";
				std::getline(std::cin, choice);
			}
		}
		else
			running = false;
	}
	return 0;
}