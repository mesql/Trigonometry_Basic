#include <iostream>
#include <cmath>
#include <string>
#include "TrigFunc.h"

int main(){
	using namespace std;
	
	//Variables to store input in
	int angle = 0;
	string function = "Default";

	//Ask for angle
	cout << "Welcome to Trigonometry Basic!  Please enter an angle:\n\n";
	
	//Get angle from user
	cin >> angle;
	
	//Ask for function
	cout << "\nPlease enter a function(sin/cos/tan):\n\n";
	
	//Get function from user
	cin >> function;
	
	//Clear the screen
	system("cls");

	//If functions to determine what function to use and output commands.
	if (function == "sin"){
		SinFunc(angle);
	}
	if (function == "cos"){
		CosFunc(angle);
	}
	if (function == "tan"){
		TanFunc(angle);
	}

	system("pause");
	return 0;
}