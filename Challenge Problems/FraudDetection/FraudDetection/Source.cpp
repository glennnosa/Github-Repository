#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main()
{
	char x;
	std::string word;
	std::string array[4][99] = {};
	int pNum = 0;
	int q = 0;
	bool notDone = true;
	std::ifstream inFile;
	inFile.open("C:\\Users\\gn129659\\Desktop\\transactions.txt");
	word.clear();

	while (notDone) {
		int i = 0;

		while (i < 4 && notDone){
			x = inFile.get();
			if (word == "stop")
				notDone = false;
			if (x == '|' || x == '\n' && notDone){
				array[i][pNum] = word;
				word.clear();
				i = i + 1;
			}
			else{
				word = word + x;
			}
			if (x == '\n')
				pNum = pNum + 1;
		}
		word.clear();
	}

	int conv;
	for (int c = 0; c < pNum; c++){
		std::istringstream (array[1][c]) >> conv;
		if (conv > 3000)
			std::cout << array[0][c] << " commited fraud." << std::endl;
	}
	int time[99] = {};
	for (int z = 0; z < pNum; z++){
		std::istringstream(array[3][z]) >> time[z];
	}
	int space = 1;
	while (space <= pNum){
		for (int f = 0; f < pNum; f++){
			if (array[0][f] == array[0][f + space] && array[2][f] != array[2][f + space] && (time[f + space] - time[f]) < 60)
				std::cout << array[0][f] << " commited fraud." << std::endl;
		}
		space = space + 1;
	}
	return 0;
}