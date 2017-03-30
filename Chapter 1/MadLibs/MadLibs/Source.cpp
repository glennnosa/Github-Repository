#include <iostream>
#include <string>

int main()
{
	std::string protag, antag, bystander1, bystander2, locale, weapon, bodyPart;
	int pop, hours, percent, dead;

	std::cout << "Welcome to Fight to the DEATH" << std::endl;
	std::cout << "Please fill all information out below" << std::endl;


	std::cout << "Please enter a name: " << std::endl;
	std::cin >> protag;
	std::cout << "Please enter another name: " << std::endl;
	std::cin >> antag;
	std::cout << "Please enter another name: " << std::endl;
	std::cin >> bystander1;
	std::cout << "Please enter another name: " << std::endl;
	std::cin >> bystander2;
	std::cout << "Please enter a place: " << std::endl;
	std::cin >> locale;
	std::cout << "Please enter a noun: " << std::endl;
	std::cin >> weapon;
	std::cout << "Please enter an external body part: " << std::endl;
	std::cin >> bodyPart;
	std::cout << "Please enter a large number: " << std::endl;
	std::cin >> pop;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> hours;
	std::cout << "Please enter a percentage: " << std::endl;
	std::cin >> percent;
	dead = pop * (percent / 100);

	std::cout << "\nOne sunny day in " << locale << std::endl;
	std::cout << "\n" << protag << " was just walking along minding his own business." << std::endl;
	std::cout << "\nWhen all of a sudden " << antag << ", a giant douche," << std::endl;
	std::cout << "\ndecided to jump " << protag << "." << std::endl;
	std::cout << "\nThis really pissed " << protag << " off." << std::endl;
	std::cout << "\nEspecially since " << antag << "'s initial attack killed " << bystander1 << std::endl;
	std::cout << "\nSo the two battled for " << hours << " hours." << std::endl;
	std::cout << "\nThe resulting battle caused the death of " << dead << " people" << std::endl;
	std::cout << "\nof " << locale << ", but the battle was shifting into " << antag << "'s favor." << std::endl;
	std::cout << "\nTo overcome this " << protag << " pulled a " << weapon << std::endl;
	std::cout << "\nout of a nearby stone and attacked " << antag << " with it."  << std::endl;
	std::cout << "\nThe blow was so powerful it knocked " << antag << " into " << bystander2 << "." << std::endl;
	std::cout << "\nCausing" << bystander2 << " to die and " << antag << " to be weakened." << std::endl;
	std::cout << "\nWith another crushing blow with " << protag << "'s " << weapon << "," << std::endl;
	std::cout << "\n" << antag << " lost their " << bodyPart<< ", it was gruesome." << std::endl;
	std::cout << "\n" << antag << " surrendered, but the damage was already done." << std::endl;
	std::cout << "\n" << (pop - dead) << " now lie dead because of their carnage." << std::endl;
	std::cout << "\nBecause of this, " << protag << " struck " << antag << " one last time." << std::endl;
	std::cout << "\nWith one last breath " << antag << " proclaimed \"Make America Great Again\"" << std::endl;
	std::cout << "\nAnd died." << std::endl;
}