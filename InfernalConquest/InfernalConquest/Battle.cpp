#include <iostream>
#include <string>
#include <sstream>
#include "Header.h"

void enemy_turn(){		//enemy's turn phase
	int e_move = rand() % 5;
	int hits;
	switch (e_move){
	case 0:	//fireball attack
		damage = (5 + rand() % (12 * enemy_level)) * damage_absorb;
		playerHealth = playerHealth - damage;
		std::cout << "The " << enemy_name << " casts a fireball at you.\nYou took " << damage << " damage." << std::endl;
		break;
	case 1:	//curse attack
		std::cout << "The " << enemy_name << " laid a curse on you. Draining a fifth of your health." << std::endl;
		damage = playerHealth / 5;
		playerHealth = playerHealth - damage;
		break;
	case 2:	//volley attack
		std::cout << "The " << enemy_name << " launched a volley of knives from the void at you." << std::endl;
		hits = 3 + rand() % 6;
		for (int i = 0; i < hits; i++){
			damage = 2 + rand() % 10;
			std::cout << "A knife hit you, doing " << damage << " damage." << std::endl;
			playerHealth = playerHealth - damage;
		}
		break;
	case 3:	//fireball attack
		damage = (5 + rand() % (12 * enemy_level)) * damage_absorb;
		playerHealth = playerHealth - damage;
		std::cout << "The " << enemy_name << " casts a fireball at you.\nYou took " << damage << " damage." << std::endl;
		break;
	case 4:	//fireball attack
		damage = (5 + rand() % (12 * enemy_level)) * damage_absorb;
		playerHealth = playerHealth - damage;
		std::cout << "The " << enemy_name << " casts a fireball at you.\nYou took " << damage << " damage." << std::endl;
		break;
	case 5:	//healing move
		damage = 0;
		enemyHealth = enemyHealth + (15 * enemy_level);
		std::cout << "The " << enemy_name << " healed itself for " << damage << " health points." << std::endl;
		break;
	}
}

void player_turn(){		//player's turn phase
	battle_interface();
	switch (move){
	case 'a':
		damage = attack();
		enemyHealth = enemyHealth - damage;
		break;
	case 'i':
		inventoryScreen();
		break;
	case 'd':
		break;
	}
}

void battle_flow(std::string e_name, int e_lvl){	//main battle flow
	enemyHealth = e_lvl * 50;	//declares enemy's health based on level
	enemy_name = e_name;
	enemy_level = e_lvl;
	tempDam = 0, tempDef = 0;	//sets temp modifiers to 0
	int line = rand() % 5;		//generates a random number to determine the line that will print before the battle
	switch (line){
		case 0:
			std::cout << "A " << e_name << " has attacked you." << std::endl;
			break;
		case 1:
			std::cout << "A wild " << e_name << " appeared." << std::endl;
			break;
		case 2:
			std::cout << "A " << e_name << " ambushes you." << std::endl;
			break;
		case 3:
			std::cout << "A " << e_name << " wants to fight." << std::endl;
			break;
		case 4:
			std::cout << "A " << e_name << " wants your gold." << std::endl;
			break;
		case 5:
			std::cout << "A " << e_name << " is having a bad day." << std::endl;
			break;
	}
	while (enemyHealth > 0 && playerHealth > 0){
		player_turn();
		if (enemyHealth > 0)
			enemy_turn();
	}
	if (playerHealth <= 0)
		death();
	stat[3] = stat[3] - tempDam;
	stat[4] = stat[4] - tempDam;
}

void death(){
	std::cout << "================================================================================";
	std::cout << "|                     _____                                                    |";
	std::cout << "|      \        /    /     \   |        |                                      |";
	std::cout << "|       \      /    /       \  |        |                                      |";
	std::cout << "|        \    /    |         | |        |                                      |";
	std::cout << "|         \  /     |         | |        |                                      |";
	std::cout << "|          \/      |         | |        |                                      |";
	std::cout << "|          ||      |         | |        |                                      |";
	std::cout << "|          ||      |         | |        |                                      |";
	std::cout << "|          ||       \       /   \      /                                       |";
	std::cout << "|          ||        \_____/     \____/                                        |";
	std::cout << "|                                                                              |";
	std::cout << "|              _____      ______                                               |";
	std::cout << "|              |    \                                                          |";
	std::cout << "|              |     \                                                         |";
	std::cout << "|              |      \                                                        |";
	std::cout << "|              |       |                                                       |";
	std::cout << "|              |       |                                                       |";
	std::cout << "|              |      /                                                        |";
	std::cout << "|              |     /                                                         |";
	std::cout << "|              |____/                                                          |";
	std::cout << "|                                                                              |";
	std::cout << "================================================================================";
}