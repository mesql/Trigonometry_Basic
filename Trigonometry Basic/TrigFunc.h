#include <iostream>
using namespace std;

// Function for Sine
void SinFunc(int x){

	cout << "The Sine of ";
	cout << x;
	cout << " is ";
	cout << sin(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Cosine
void CosFunc(int x){

	cout << "The Cosine of ";
	cout << x;
	cout << " is ";
	cout << cos(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Tangent
void TanFunc(int x){

	cout << "The Tangent of ";
	cout << x;
	cout << " is ";
	cout << tan(x*0.0174532888888889);
	cout << "\n\n";
}

void CscFunc(int x){
	cout << "The Co-secant of ";
	cout << x;
	cout << " is ";
	cout << 1/(sin(x*0.0174532888888889));
	cout << "\n\n";
}

void SecFunc(int x){
	cout << "The Secant of ";
	cout << x;
	cout << " is ";
	cout << 1/(cos(x*0.0174532888888889));
	cout << "\n\n";
}

void CotFunc(int x){
	cout << "The Co-Tangent of ";
	cout << x;
	cout << " is ";
	cout << 1/(tan(x*0.0174532888888889));
	cout << "\n\n";
}
