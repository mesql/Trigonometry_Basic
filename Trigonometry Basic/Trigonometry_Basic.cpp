#include <iostream>
#include <cmath>
#include <string>
#include "TrigFunc.h"

int main(){
	using namespace std;
	
	//Variables to store input in
	int angle = 0;
	string function = "Default";

	//Display warning that program is case-sensetive
	cout << "Warning, this program's function entry code is case-sensetive, please type \nfunctions exactly as directed and angles as whole numbers.\n\n\n\n";
	
	//Ask for angle
	cout << "Welcome to Trigonometry Basic!  Please enter an angle value:\n\n";
	
	//Get angle from user
	cin >> angle;
	
	//Ask for function
	cout << "\nYou are using the number ";
	cout << angle;
	cout << ", please enter a function (Sin/Cos/Tan):\n\n";
	
	//Get function from user
	cin >> function;
	
	//Clear the screen
	system("cls");

	//If functions to determine what function to use and output commands.
	if (function == "Sin"){
		SinFunc(angle);
	}
	if (function == "Cos"){
		CosFunc(angle);
	}
	if (function == "Tan"){
		TanFunc(angle);
	}
	else{
		cerr << "Error! You did not specify a proper angle / function.  Please refer to the \nwarning message on program startup and try again.\n\n";
	}
	system("pause");
	return 0;
}