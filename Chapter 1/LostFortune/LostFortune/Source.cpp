#include <iostream>
#include <string>

int main()
{
	const int gold = 900;
	int adventure, killed, survivors;
	std::string leader;

	//info input
	std::cout << "Welcome to Lost Fortune" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter the number of Adventurers in your party: ";
	std::cin >> adventure;

	std::cout << "Enter a number less than the first: ";
	std::cin >> killed;

	survivors = adventure - killed;

	std::cout << "Enter your last name: ";
	std::cin >> leader;

	//the story so far
	std::cout << "\nA brave group of " << adventure << " set out on a quest" << std::endl;
	std::cout << "-- in search of the lost treasure of the ancient Dwarves." << std::endl;
	std::cout << "The group was led by the legendary Tsar of Russia, " << leader << std::endl;

	std::cout << "\nAlong the way, a band of marauding ogres ambushed the party. " << std::endl;
	std::cout << "All fought bravely under the command of " <<leader << std::endl;
	std::cout << ", and the ogres were defeated, but at a cost." << std::endl;
	std::cout << "Of the adventurers " << killed << " were vanquished, " << std::endl;

	std::cout << "leaving just " <<survivors << " in the party.\n" << std::endl;
	std::cout << "\nThe party was about to lose hope. " << std::endl;
	std::cout << "But while laying the deceased to rest, " << std::endl;
	std::cout << "they stumbled upon burried fortune. " << std::endl;
	std::cout << "So the adventurers split " << gold << " gold pieces." << std::endl;
	std::cout << leader << " held on to the extra " << (gold % survivors) << std::endl;
	std::cout << "pieces to keep things fair of course.\n" << std::endl;
}