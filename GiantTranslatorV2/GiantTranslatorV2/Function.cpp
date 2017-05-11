#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "Header.h"

std::string choice, eng, spn, fre, ger;
std::ofstream myfile;
std::ifstream inFile;
char x;
int wordCount = 0;
std::string word;
std::string input;
std::string array[4][999];
bool notDone = true;
bool wrt = true;
bool running = true;


void print(){
	std::cout << "\n\nCurrent Data Bank Inventory\n=================================\nEnglish              Spanish              French               German       \n=======================================================================" << std::endl;
	int w = 0;
	while (w < wordCount){
		int length;
		for (int l = 0; l < 4; l++){
			length = array[l][w].length();
			std::cout << array[l][w];
			while (length < 21){
				std::cout << " ";
				length = length + 1;
			}
		}
		std::cout << "\n";
		w = w + 1;
	}

}

void clear(){
	for (int z = 0; z < wordCount; z++){
		for (int i = 0; i < 4;){
			array[i][z].clear();
			i = i + 1;
		}
	}
}


void build(){
	std::cout << "Data Bank Building ... ";
	inFile.open("C:\\Users\\gn129659\\Desktop\\Github Repository\\GiantTranslatorV2\\translator.txt", std::ios::in);
	//inFile.seekg(0, inFile.beg);
	notDone = true;
	int wc = 0;
	wordCount = 0;
	if (array[0][0] != "")
		clear();
	while (notDone) {
		int i = 0;
		while (i < 4 && notDone){
			x = inFile.get();
			if (inFile.eof())
				notDone = false;
			if (x == '|' || x == '\n' && notDone){
				array[i][wc] = word;
				word.clear();
				i = i + 1;
			}
			else
				word = word + x;
			if (x == '\n'){
				wordCount = wordCount + 1;
				wc = wc + 1;
			}
		}
	}
	inFile.close();
	std::cout << "Done." << std::endl;
}

void translate(){
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

void write(){
	while (wrt){
		myfile.open("C:\\Users\\gn129659\\Desktop\\Github Repository\\GiantTranslatorV2\\translator.txt", std::ios::app);
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