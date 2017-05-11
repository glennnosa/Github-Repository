#include <iostream> 
#include <string>
#include <stdlib.h>
#include <stdio.h>

int rng(int min, int max){
	int number = (min + rand() % max);
	return number;
}

int main(){
	int pHealth = 1000, mHealth = 2000, emotDamage = 1000, estus = 4, damage, mChoice, turns = 0, crit;
	std::string choice;
	std::cout << "Welcome to the fight of your life." << std::endl;
	std::cout << "You approach a monster who wants to fight you." << std::endl;
	while (mHealth > 0 && pHealth > 0){
		int i = rng(0, 10);
		turns = turns + 1;
		std::cout << "\n\nEnemy Health: " << mHealth << std::endl;
		std::cout << "Your Health: " << pHealth << std::endl;
		if (i == 5){
			estus = estus + 1;
			std::cout << "You gained a potion." << std::endl;
		}
		std::cout << "Potions Remaining: " << estus << std::endl;
		std::cout << "What do you do?" << std::endl;
		std::cout << "Run, stab, slash, punch, heal: ";
		std::cin >> choice;
		mChoice = rng(1, 6);
		if (emotDamage < 0){
			choice = "cry";
			emotDamage = 1000;
		}
		if (choice == "stab"){
			crit = rng(0, 50);
			damage = rng(100, 200);
			if (crit == 2){
				damage = damage * 4;
				std::cout << "CRITICAL HIT" << std::endl;
			}
			mHealth = mHealth - damage;
			std::cout << "You did " << damage << " damage." << std::endl;
		}
		else if (choice == "slash"){
			damage = rng(0, 400);
			mHealth = mHealth - damage;
			std::cout << "You did " << damage << " damage."<< std::endl;
		}
		else if (choice == "punch"){
			damage = rng(10, 20);
			mHealth = mHealth - damage;
			std::cout << "You did " << damage << " damage." << std::endl;
		}
		else if (choice == "run"){
			damage = 0;
			mHealth = mHealth - damage;
			std::cout << "You did " << damage << " damage.\nYou wuss." << std::endl;
			mChoice = 4;
		}
		else if (choice == "cry"){
			std::cout << "You layed down and cried from emotional trauma." << std::endl;
		}
		else if (choice == "heal"){
			damage = rng(50, 400);
			if (estus < 1)
				damage = 0;
			else
				estus = estus - 1;
			pHealth = pHealth + damage;
			if (pHealth > 1000)
				pHealth = 1000;
			std::cout << "You healed " << damage << " health points." << std::endl;
		}
		else
			std::cout << "Enter a valid command idiot." << std::endl;
		if (mHealth < 0)
			mChoice = 0;
		switch (mChoice){
		case 1:
			damage = rng(0, 400);
			pHealth = pHealth - damage;
			std::cout << "The monster smacked you around and did " << damage << " damage." << std::endl;
			break;
		case 2:
			damage = rng(200, 300);
			crit = rng(0, 50);
			if (crit == 2){
				damage = damage * 4;
				std::cout << "CRITICAL HIT" << std::endl;
			}
			pHealth = pHealth - damage;
			std::cout << "The monster bit you and did " << damage << " damage." << std::endl;
			break;
		case 3:
			damage = rng(50, 200);
			mHealth = mHealth + damage;
			if (mHealth > 2000)
				mHealth = 2000;
			std::cout << "The monster healed " << damage << " health points." << std::endl;
			break;
		case 4:
			damage = rng(150, 300);
			emotDamage = emotDamage - damage;
			std::cout << "The monster laughed at you and did emotional damage." << std::endl;
			break;
		case 5:
			damage = 400;
			pHealth = pHealth - damage;
			std::cout << "The monster stepped on you and did " << damage << " damage." << std::endl;
			break;
		case 6:
			int volley = rng(2, 5);
			int j = 1;
			std::cout << "The monster launched a volley of acid at you." << std::endl;
			while (j <= volley){
				damage = rng(50, 100);
				std::cout << "The monster spit acid at you and did " << damage << " damage." << std::endl;
				pHealth = pHealth - damage;
				j = j + 1;
			}
			break;
		}
		if (mHealth < 0)
			std::cout << "You killed him in " << turns << " turns." << std::endl;
		if (pHealth < 0)
			std::cout << "You dead." << std::endl;
	}
}