#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sstream>

int main()
{
	std::string strReplace = "HELLO";
	std::string strNew = "GOODBYE";
	std::ifstream filein("filein.txt"); //File to read from
	std::ofstream fileout("fileout.txt"); //Temporary file
	if (!filein || !fileout)
	{
		std::cout << "Error opening files!" << std::endl;
		return 1;
	}

	std::string strTemp;
	bool found = false;
	while (!filein.eof()){
		filein >> strTemp;
		if (strTemp == strReplace){
			strTemp = strNew;
			found = true;
		}
		fileout << "" << strTemp << "\n";
	}
	int result;
	char oldname[] = "fileout.txt";
	char newname[] = "filein.txt";
	result = rename(oldname, newname);
	if (result == 0)
		puts("File successfully renamed");
	else
		perror("Error renaming file");
	return 0;
}