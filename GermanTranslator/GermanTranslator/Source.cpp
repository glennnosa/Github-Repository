#include <iostream>
#include <string>
#include <fstream>

int main(){
	std::string input;
	std::string choice = "yes";
	std::string wordBank[99][2] = {
		{ "guten", "good" },
		{ "jungen", "boy" },
		{ "frau", "mrs" },
		{ "mann", "man" },
		{ "herr", "mr" },
		{ "morgen", "morning" },
		{ "geburtstag", "birthday" },
		{ "kuchen", "cake" },
		{ "waffen", "weapon" },
		{ "der", "he" },
		{ "die", "her" },
		{ "dem", "you guys" },
		{ "geschenk", "gift" },
		{ "madchen", "girl" }
	};
	while (choice != "no"){
		std::cout << "Input a word in German or English to translate: ";
		std::cin >> input;
		for (int i = 0; i < 99; i++){
			if (input == wordBank[i][0])
				std::cout << "English: " << wordBank[i][1] << std::endl;
		}
		for (int i = 0; i < 99; i++){
			if (input == wordBank[i][1])
				std::cout << "German: " << wordBank[i][0] << std::endl;
		}
		std::cout << "Do another? ";
		std::cin >> choice;
	}
	return 0;
}