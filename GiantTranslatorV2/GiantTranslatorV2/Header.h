#ifndef HEADER_H_ // Include Guards
#define HEADER_H_ 
#include <string>

	extern std::string choice, eng, spn, fre, ger;
	extern std::ofstream myfile;
	extern std::ifstream inFile;
	extern char x;
	extern int wordCount;
	extern std::string word;
	extern std::string input;
	extern std::string array[4][999];
	extern bool notDone;
	extern bool wrt;
	extern bool running;

// Function prototypes
void build();
void write();
void translate();
void print();
void clear();

#endif 