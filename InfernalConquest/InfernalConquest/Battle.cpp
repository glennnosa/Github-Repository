#include <iostream>
#include <string>
#include <sstream>
#include "Header.h"

void enemy_turn(){		//enemy's turn phase
	int e_move = rand() % 5;
	switch (e_move){
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}

void player_turn(){		//player's turn phase
	battle_interface();
	switch (move){
	case 'a':
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
	stat[3] = stat[3] - tempDam;
	stat[4] = stat[4] - tempDam;
}