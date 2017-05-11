#include <iostream> 
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>


int inv[] = {	//inventory array
	{ 1 },		//sword  0
	{ 1 },		//shield 1 
	{ 1 },		//armor  2
	{ 1 },		//flask  3
};
int stat[] = {	//player stats array
	{ 3 },		//potions      0
	{ 0 },		//Honor        1
	{ 0 },		//body count   2
	{ 10000 }	//Health       3
};

int rng(int min, int max){ //generates a random number with the first number in the call being the min and second being the max
	srand(time(0));
	int number = (min + rand() % max);
	return number;
}

void fight(int enemy){
	int enemyHealth = enemy, damageAbsorb, dam, eChoice;
	double damMult, enLvl;
	std::string move;
	enLvl = enemy / 2000;
	while (stat[3] > 0 && enemyHealth > 0){
		std::cout << "\n\nYour health: " << stat[3] << std::endl;
		std::cout << "Your potions: " << stat[0] << std::endl;
		std::cout << "Enemy health: " << enemyHealth << std::endl;
		std::cout << "Do you heal, block, stab, or slash: ";
		std::cin >> move;
		damageAbsorb = (inv[2] * 300);
		damMult = (stat[0] * 1);
		if (move == "heal"){
			if (stat[0] < 1)
				std::cout << "You don't have any potions." << std::endl;
			else{
				stat[3] = stat[3] + (inv[3] * 1500);
				stat[0] = stat[0] - 1;
				std::cout << "You healed " << (inv[3] * 1500) << " health points." << std::endl;
			}
		}
		else if (move == "block"){
			damageAbsorb = damageAbsorb + (inv[1] * 500);
			std::cout << "Your raised your guard." << std::endl;
		}
		else if (move == "stab"){
			if (rng(0, 100) > 15){
				dam = (damMult * rng(200, 300));
				enemyHealth = enemyHealth - dam;
				std::cout << "You did " << dam << " damage." << std::endl;
			}
			else
				std::cout << "The enemy dodged your attack." << std::endl;
		}
		else if (move == "slash"){
			dam = (damMult * rng(100, 200));
			enemyHealth = enemyHealth - dam;
			std::cout << "You did " << dam << " damage." << std::endl;
		}
		else
			std::cout << "Learn how to type moron." << std::endl;
		if (enemyHealth > 0){
			eChoice = rng(0, 4);
			switch (eChoice){
			case 0:
				dam = rng(250, 500);
				enemyHealth = enemyHealth + dam;
				if (enemyHealth > enemy)
					enemyHealth = enemy;
				std::cout << "The enemy healed " << dam << " health points." << std::endl;
				break;
			case 1:
				dam = (rng(1000, 1500) * enLvl) - damageAbsorb;
				if (dam < 0)
					dam = 0;
				stat[3] = stat[3] - dam;
				std::cout << "The enemy stabbed you and did " << dam << " damage." << std::endl;
				break;
			case 2:
				dam = (rng(1000, 2000) * enLvl) - damageAbsorb;
				if (dam < 0)
					dam = 0;
				stat[3] = stat[3] - dam;
				std::cout << "The enemy bashed you and did " << dam << " damage." << std::endl;
				break;
			case 3:
				int volley = rng(3, 6);
				int j = 1;
				std::cout << "The enemy started throwing knives at you." << std::endl;
				while (j <= volley){
					dam = rng(200, 500) - (damageAbsorb / 2);
					std::cout << "The enemy hit you with a knive and did " << dam << " damage." << std::endl;
					stat[3] = stat[3] - dam;
					j = j + 1;
				}
				break;
			}
		}
	}
	if (enemyHealth < 1){
		std::cout << "You killed him." << std::endl;
		stat[2] = stat[2] + 1;
	}
	if (stat[3] < 1){
		std::cout << "You died." << std::endl;
		exit(0);
	}
}

int main(){
	std::string name, choice;
	std::cout << "Welcome Knight Templar. What is your name? ";
	std::getline(std::cin, name);
	std::cout << "Alright " << name << ", we ride to reinforce the siege of Jerusalem at dawn.\nPrepare yourself.\nWhat shall you bring from the camp?\nGreatSword, GreatShield, HeavyArmor, ExtraPotions: ";
	std::cin >> choice;
	if (choice == "greatsword")
		inv[0] = 4;
	else if (choice == "greatshield")
		inv[1] = 4;
	else if (choice == "heavyarmor")
		inv[2] = 4;
	else if (choice == "extrapotions")
		stat[0] = 6;
	else
		std::cout << "Learn how to type idiot." << std::endl;
	std::cout << "Now that you are ready, lets ride.\nYou approach the city of Jerusalem. Do you climb the ladders up to the walls,\nor prepare to storm the gates into the city.\nChoose walls or gate: ";
	std::cin >> choice;
	if (choice == "walls"){
		std::cout << "You climb the ladder up to the top of the wall.\nYou are surrounded by your brothers in arms.\nThe heathens begin to charge your position.\nYou rush to the frontline and engage a saracen." << std::endl;
		fight(1000);
		std::cout << "After killing the first saracen another one with heavier armor approaches you." << std::endl;
		fight(2000);
	}
	else if (choice == "gate"){
		std::cout << "You storm the gate and your troop quickly gets surrounded.\nThe heathens send a well armored knight against you." << std::endl;
		fight(3500);
		std::cout << "With the knight laying dead at your feet the heathens begin to fall back.\nYour troop marches farther into the city.\nYou loot an apothecary and find some potions." << std::endl;
		stat[0] = stat[0] + 3;
		std::cout << "While looting the apothecary your ambushed by a few saracens." << std::endl;
		fight(1250);
		fight(1250);
		fight(1250);
		std::cout << "You fought off the heathens, but the time it took allowed the rest of your troop to march on without you.\nYou rush to catch up to them but your ambushed by a heavy armored saracen." << std::endl;
		fight(2500);
		std::cout << "You kill the knight but he damages your sword in the process.\nYou attempt to mend it but it just ends up worse." << std::endl;
		inv[0] = inv[0] - 1;
		if (inv[0] < 1)
			inv[0] = 1;
		std::cout << "You catch up with your troop just in time to attack a band of saracens." << std::endl;
		fight(1750);
		fight(1750);
		fight(1750);
	}
}