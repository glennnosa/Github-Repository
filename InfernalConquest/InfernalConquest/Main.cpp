#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include "Header.h"

int playerHealth = 100;
std::string choice;
int inventory_stock[9];
char move;
int enemyHealth;
int stat[6] = {
	(0)	//exp
	(1)	//overall
	(1)	//health
	(1)	//attack
	(1)	//defense
	(0) //karma
};
int max_health = 100;
int damage;
int tempDam = 0, tempDef = 0;
double damage_absorb = 1;
int enemy_level;
std::string enemy_name, player_name;

int main(){
	srand(time(0));
	std::cout << "What is your name? ";
	std::getline(std::cin, player_name);
	std::cout << "Welcome to Hell " << player_name << "\nIf you want out you'll have to fight\nThere are nine circles of hell\nEach circle gets progressively more difficult" << std::endl;
	battle_flow("Floating Skull", 1);
}