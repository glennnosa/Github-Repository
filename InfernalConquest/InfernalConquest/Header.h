#ifndef HEADER_H_ // Include Guards
#define HEADER_H_ 
#include <string>

//function declarations
char battle_interface();							//battle interface
void inventoryScreen();								//player inventory
void battle_flow(std::string e_name, int e_lvl);	//main battle flow
int attack();										//player attack screen
void player_turn();									//player turn phase
void enemy_turn();									//enemy turn phase

//global variable declarations
extern int playerHealth;						//player health
extern int enemyHealth;							//enemy's health
extern char move;								//player move choice
extern std::string choice;						//player decision choice
extern int inventory_stock[9];					//player inventory stock
extern int stat[];								//player's stats
extern int max_health;							//player max health
extern int damage;								//damage dealt
extern int tempDam, tempDef;					//temp stats
#endif 