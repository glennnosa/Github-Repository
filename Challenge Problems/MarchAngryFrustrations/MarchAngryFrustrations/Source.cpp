#include <iostream>
#include <string>

int main()
{
	std::string team1, team2;
	char t1, t2;
	std::cout << "Welcome to March Madness" << std::endl;
	std::cout << "Input one of the team names: ";
	std::cin >> team1;
	std::cout << "Input the other team name: ";
	std::cin >> team2;
	t1 = team1.at(0);
	t2 = team2.at(0);
	if (t1 == t2){
		if (team1.length() > team2.length())
			std::cout << team1 << " Wins" << std::endl;
		if (team2.length() > team1.length())
			std::cout << team2 << " Wins" << std::endl;
		if (team1.length() == team2.length())
			std::cout << "'Tis a tie" << std::endl;
	}
	else{
		if (t1 < t2)
			std::cout << team1 << " Wins" << std::endl;
		if (t2 < t1)
			std::cout << team2 << " Wins" << std::endl;
	}
	return 0;
}