#include <iostream>
#include <cmath>
#include <string>
#include "TrigFunc.h"
using namespace std;

int main(){
	
	//Variables to store input in
	double angle = 0;
	double radians = 0;
	string function = "Default";
	string measurement = "Default";
	char use;

	//Display warning that program is case-sensetive
	cout << "Warning, this program's function entry code is case-sensetive, please type \nfunctions exactly as directed.\n\n\n\n";
	
	//Ask for angle
	cout << "Welcome to Trigonometry Basic!  \nPlease enter if you are using Degrees or Radians: ";
	
	//Get angle from user
	cin >> measurement;
	
	use = measurement[0];	//The first character in the measurement string
	

	switch(use){
		
	case 'D':	//If the user enters D or d, They are using degrees
	case 'd':

		cout << "Please enter your angle measurement: ";
		cin >> angle;

		cout << "\nYou are using the number ";
		cout << angle;

		cout << ", please enter a function (Sin/Cos/Tan/Csc/Sec/Cot):\n\n";
		cin >> function;

		system("cls");  //Clear the screen

		//If statements for input

		if (function == "Sin"){ 
			SinFunc(angle);
		}
		
		if (function == "Cos"){
			CosFunc(angle);
		}
		
		if (function == "Tan"){
			TanFunc(angle);
		}
		
		if (function == "Csc"){
			CscFunc(angle);
		}
		
		if (function == "Sec"){
			SecFunc(angle);
		}
		
		if (function == "Cot"){
			CotFunc(angle);
		}
		
		else if (function != "Sin" && function == "Cos" && function == "Tan" && function == "Csc" && function == "Sec" && function == "Cot"){
			cout << "Error! You did not specify a proper angle / function.  Please refer to the \nwarning message on program startup and try again.\n\n";
		}
		break;
	
	
	case 'R':
	case 'r': //If the user enters R or r, they are using radians

		cout << "Please enter your radian measurement: ";
		cin >> radians;

		cout << "\nYou are using the number ";
		cout << radians;

		cout << ", please enter a function (Sin/Cos/Tan/Csc/Sec/Cot):\n\n";
		cin >> function;

		system("cls"); //clear the screen.

		//If statements for functions
		if (function == "Sin"){
			SinRad(radians);
		}
		
		if (function == "Cos"){
			CosRad(radians);
		}
		
		if (function == "Tan"){
			TanRad(radians);
		}
		
		if (function == "Csc"){
			CscRad(radians);
		}
		
		if (function == "Sec"){
			SecRad(radians);
		}
		
		if (function == "Cot"){
			CotRad(radians);
		}
		
		else if (function != "Sin" && function == "Cos" && function == "Tan" && function == "Csc" && function == "Sec" && function == "Cot"){
			cout << "Error! You did not specify a proper angle / function.  Please refer to the \nwarning message on program startup and try again.\n\n";
		}
		break;
	}
	
	
	cout << "Please press enter to continue: ";
	cin.ignore();
	cin.get();
	return 0;
}