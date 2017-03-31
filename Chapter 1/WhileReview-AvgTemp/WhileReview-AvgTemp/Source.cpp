#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//delcare variables
	int numberOfTemps = 0; //counter
	int totalTemp = 0;	//accumulator
	int temp = 0;
	double average = 0;

	//get first temp
	cout << "First Temperature (999 to stop): ";
	cin >> temp;

	while (temp != 999){
		//update counter and accumulator 
		numberOfTemps += 1;
		totalTemp += temp;

		//get remaining temps
		cout << "Next temperature (999 to stop): ";
		cin >> temp;
	} //end while

	//verify that at least one temp was entered 
	if (numberOfTemps > 0){
		//calculate and display average temp
		average = static_cast<double>(totalTemp) /
			static_cast<double>(numberOfTemps);
		cout << fixed << setprecision(1);
		cout << endl << "Average Temperature: "
			<< average << endl;
	}
	else
		cout << "No temperatures were entered." << endl;
	//end if 

	return 0;
}