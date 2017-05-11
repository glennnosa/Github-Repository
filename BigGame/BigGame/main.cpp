#include <iostream> 
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>


int playerHealth = 10000, chestNum, damage, potions = 3;
int inv[5] = { //inventory array
	{ 1 }, //sword
	{ 1 }, //shield
	{ 1 }, //armor
	{ 1 }, //potion
	{ 0 }  //karma
};

int rng(int min, int max){ //generates a random number with the first number in the call being the min and second being the max
	int number = (min + rand() % max);
	return number;
}

void fight(int enemy){
	int enemyHealth = enemy;
	int mChoice, damageAbsorb;
	std::string move;
	while (enemyHealth > 0 && playerHealth > 0){
		std::cout << "\n\nEnemy Health: " << enemyHealth << std::endl;
		std::cout << "Your Health: " << playerHealth << std::endl;
		std::cout << "Potions Remaining: " << potions << std::endl;
		std::cout << "Do you stab, slash, block, or heal: ";
		std::cin >> move;
		mChoice = rng(1, 4);
		if (move == "stab"){
			damage = rng(200, 400) * inv[0];
			enemyHealth = enemyHealth - damage;
			std::cout << "You did " << damage << " damage." << std::endl;
		}
		else if (move == "slash"){
			damage = rng(100, 600) * inv[0];
			enemyHealth = enemyHealth - damage;
			std::cout << "You did " << damage << " damage." << std::endl;
		}
		else if (move == "block"){
			damageAbsorb = (inv[1] * 200) + (inv[2] * 200);
			std::cout << "You raised your guard." << std::endl;
		}
		else if (move == "heal"){
			damage = (rng(500, 1000)) * inv[3];
			if (potions < 1)
				damage = 0;
			else
				potions = potions - 1;
			playerHealth = playerHealth + damage;
			if (playerHealth > 10000)
				playerHealth = 10000;
			std::cout << "You healed " << damage << " health points." << std::endl;
		}
		else
			std::cout << "Enter a valid command idiot." << std::endl;
		if (enemyHealth < 0)
			mChoice = 0;
		if (move != "block")
			damageAbsorb = inv[2] * 200;
		switch (mChoice){
		case 1:
			damage = rng(600, 1200) - damageAbsorb;
			playerHealth = playerHealth - damage;
			std::cout << "The monster smacked you around and did " << damage << " damage." << std::endl;
			break;
		case 2:
			damage = rng(500, 900) - damageAbsorb;
			playerHealth = playerHealth - damage;
			std::cout << "The monster bit you and did " << damage << " damage." << std::endl;
			break;
		case 3:
			damage = 1200 - damageAbsorb;
			playerHealth = playerHealth - damage;
			std::cout << "The monster stepped on you and did " << damage << " damage." << std::endl;
			break;
		case 4:
			int volley = rng(2, 5);
			int j = 1;
			std::cout << "The monster launched a volley of acid at you." << std::endl;
			while (j <= volley){
				damage = rng(100, 200) - damageAbsorb;
				std::cout << "The monster spit acid at you and did " << damage << " damage." << std::endl;
				playerHealth = playerHealth - damage;
				j = j + 1;
			}
			break;
		}
	}
}

int main()
{
	srand(time(0));
	bool good = true;
	std::string choice;
	std::cout << "Welcome to THE BIG GAME" << std::endl;
	std::cout << "You are just a lowely knight wandering through a wood." << std::endl;
	std::cout << "You come across three paths." << std::endl;
	while (good){
		std::cout << "Which do you choose?\nLeft, Middle, Right: ";
		std::cin >> choice;
		if (choice == "left"){
			good = false;
			std::cout << "You come across an abandoned rucksack.\nDo you open it? ";
			std::cin >> choice;
			if (choice == "yes"){
				chestNum = rand() % 5;
				switch (chestNum){
				case 0:
					inv[0] = inv[0] + 1;
					std::cout << "You found a better sword!" << std::endl;
					break;
				case 1:
					inv[1] = inv[1] + 1;
					std::cout << "You found a better shield!" << std::endl;
					break;
				case 2:
					inv[2] = inv[2] + 1;
					std::cout << "You found better armor!" << std::endl;
					break;
				case 3:
					inv[3] = inv[3] + 1;
					std::cout << "You found a better potion flask!" << std::endl;
					break;
				case 4:
					std::cout << "The bag was empty. Could have been worse." << std::endl;
					break;
				case 5:
					damage = (200 + rand() % 750);
					std::cout << "The bag was filled with venomous snakes.\nThey crawled inside your armor and bit you a lot\nYou took " << damage << " damage." << std::endl;
					break;
				}

			}
			else
				std::cout << "I guess I programmed this for nothing then." << std::endl;
		}
		else if (choice == "middle"){
			good = false;
			std::cout << "You come across a wounded knight.\nDo you approach him? ";
			std::cin >> choice;
			if (choice == "yes"){
				std::cout << "He offers you some ancient advice.\nDon't drink the water in Mexico.\nThe knight proceeds to die.\nLoot him? ";
				std::cin >> choice;
				if (choice == "yes"){
					std::cout << "He had an ancient potion flask of great power.\nThe rest of his equipment was mediocre.\nYou lose some karma for looting him though.\nKnight's honor and all." << std::endl;
					inv[4] = inv[4] - 5;
					inv[3] = 5;
 				}
				else{
					std::cout << "You chose to honor the knights code and leave him to rot.\nYou gained some karma." << std::endl;
					inv[4] = inv[4] + 5;
				}
			}
			else if (choice == "no"){
				std::cout << "The knight dies. You lose karma." << std::endl;
				inv[4] = inv[4] - 1;
			}
		}
		else if (choice == "right"){
			good = false;
			std::cout << "You walk along the right path when all of a sudden you get ambushed.\nA giant troll blocks your path.\nFight or flight? ";
			std::cin >> choice;
			if (choice == "flight"){
				std::cout << "You try to run away but another troll shows up behind you.\nYou now have to fight two trolls.\nYour cowardice has lost you some karma." << std::endl;
				inv[4] = inv[4] - 3;
				fight(5000);
			}
			else{
			}
		}
		else{
			std::cout << "Choose a real choice moron." << std::endl;
		}
	}
}