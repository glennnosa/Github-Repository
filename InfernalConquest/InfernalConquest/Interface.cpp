#include <iostream>
#include <string>
#include <sstream>
#include "Header.h"

void statScreen(){		//prints stats
	std::cout << "================================================================================";
	std::cout << "| | Stat                               | Level                                 |";
	std::cout << "================================================================================";
	std::cout << "|1|Experience Points                   | " << stat[0] << "                                     |";
	std::cout << "|2|Overall Level                       | " << stat[1] << "                                     |";
	std::cout << "|3|Health Level                        | " << stat[2] << "                                     |";
	std::cout << "|4|Attack Level                        | " << stat[3] << "                                     |";
	std::cout << "|5|Defense Level                       | " << stat[4] << "                                     |";
	std::cout << "|6|Karma                               | " << stat[5] << "                                     |";
	std::cout << "| |(r) to return                                                               |";
	std::cout << "================================================================================";
	std::cin >> move;
	if (move == 'r')
		battle_interface;
}

void inventoryScreen(){		//prints the inventory
	bool notDone = true;
	std::cout << "================================================================================";
	std::cout << "| | Item                               | Quantity                              |";
	std::cout << "================================================================================";
	std::cout << "|1|Healing Potions                     | " << inventory_stock[0] << "                                     |";
	std::cout << "|2|Damage Potions(boosts dmg)          | " << inventory_stock[1] << "                                     |";
	std::cout << "|3|Defense Potions(boosts def)         | " << inventory_stock[2] << "                                     |";
	std::cout << "|4|Leveling Potions(levels main lvl)   | " << inventory_stock[3] << "                                     |";
	std::cout << "|5|Stat Potions(levels ind stat)       | " << inventory_stock[4] << "                                     |";
	std::cout << "|6|Throwing Knives                     | " << inventory_stock[5] << "                                     |";
	std::cout << "|7|Bombs                               | " << inventory_stock[6] << "                                     |";
	std::cout << "|8|                                    | " << inventory_stock[7] << "                                     |";
	std::cout << "|9|                                    | " << inventory_stock[8] << "                                     |";
	std::cout << "| |(r) to return                       |(s) to check stats                     |";
	std::cout << "================================================================================";
	while (notDone){
		std::cout << "Input Item Number: ";
		std::cin >> move;
		switch (move){
		case 'r': //returns to main interface
			notDone = false;
			battle_interface();
			break;
		case 's': //stats
			notDone = false;
			statScreen();
			break;
		case '1': //healing potion
			if (inventory_stock[0] > 0 & playerHealth < max_health){
				playerHealth = playerHealth + 50;
				if (playerHealth > max_health)
					playerHealth = max_health;
				inventory_stock[0] = inventory_stock[0] - 1;
				std::cout << "You heal some health" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '2': //damage potion
			if (inventory_stock[1] > 0){
				tempDam = tempDam + 1;
				stat[3] = stat[3] + 1;
				inventory_stock[1] = inventory_stock[1] - 1;
				std::cout << "You boost your damage" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '3': //defense potion
			if (inventory_stock[2] > 0){
				tempDef = tempDef + 1;
				stat[4] = stat[4] + 1;
				inventory_stock[2] = inventory_stock[2] - 1;
				std::cout << "You boost your defense" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '4': //leveling potion
			if (inventory_stock[0] > 0 & playerHealth < max_health){
				playerHealth = playerHealth + 50;
				if (playerHealth > max_health)
					playerHealth = max_health;
				inventory_stock[0] = inventory_stock[0] - 1;
				std::cout << "You heal some health" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '5': //stat potion
			if (inventory_stock[0] > 0 & playerHealth < max_health){
				playerHealth = playerHealth + 50;
				if (playerHealth > max_health)
					playerHealth = max_health;
				inventory_stock[0] = inventory_stock[0] - 1;
				std::cout << "You heal some health" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '6': //throwing knive
			if (inventory_stock[0] > 0 & playerHealth < max_health){
				playerHealth = playerHealth + 50;
				if (playerHealth > max_health)
					playerHealth = max_health;
				inventory_stock[0] = inventory_stock[0] - 1;
				std::cout << "You heal some health" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '7': //bomb
			if (inventory_stock[0] > 0 & playerHealth < max_health){
				playerHealth = playerHealth + 50;
				if (playerHealth > max_health)
					playerHealth = max_health;
				inventory_stock[0] = inventory_stock[0] - 1;
				std::cout << "You heal some health" << std::endl;
				notDone = false;
			}
			else{
				std::cout << "You can't do that" << std::endl;
			}
			break;
		case '8':
			std::cout << "You can't do that" << std::endl;
			break;
		case '9':
			std::cout << "You can't do that" << std::endl;
			break;
		}
	}
}

int attack(){
	damage = 10;
	return damage;
}

char battle_interface(){
	std::string pSp = "";
	std::string eSp = "";
	if (playerHealth < 100)
		pSp = " ";
	else if (playerHealth < 10)
		pSp = "  ";
	if (enemyHealth < 100)
		eSp = " ";
	else if (enemyHealth < 10)
		eSp = "  ";
	std::cout << "================================================================================";
	std::cout << "|                       |                              |                       |";
	std::cout << "|   (a)   Attack        |   (i)      Items             |   (d)  Defend         |";
	std::cout << "|                       |                              |                       |";
	std::cout << "================================================================================";
	std::cout << "|  Player                              |                                Enemy  |";
	std::cout << "|  " << pSp << playerHealth << "/" << max_health << "                             |                                " << eSp << enemyHealth << "    |";
	std::cout << "|                                      |                                       |";
	std::cout << "================================================================================";
	std::cout << "Input Move: ";
	std::cin >> move;
	return move;
}