#include <iostream>
using namespace std;

double Pi = 3.141592654;

// Function for Sine
void SinFunc(double x){

	cout << "The Sine of ";
	cout << x;
	cout << " is ";
	cout << sin(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Cosine
void CosFunc(double x){

	cout << "The Cosine of ";
	cout << x;
	cout << " is ";
	cout << cos(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Tangent
void TanFunc(double x){

	cout << "The Tangent of ";
	cout << x;
	cout << " is ";
	cout << tan(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Co-Secant
void CscFunc(double x){
	cout << "The Co-secant of ";
	cout << x;
	cout << " is ";
	cout << 1/(sin(x*0.0174532888888889));
	cout << "\n\n";
}

// Function for Secant
void SecFunc(double x){
	cout << "The Secant of ";
	cout << x;
	cout << " is ";
	cout << 1/(cos(x*0.0174532888888889));
	cout << "\n\n";
}

// Function for Co-Tangent
void CotFunc(double x){
	cout << "The Co-Tangent of ";
	cout << x;
	cout << " is ";
	cout << 1/(tan(x*0.0174532888888889));
	cout << "\n\n";
}

// Function for Sin, using radians
void SinRad(double x){	
	cout << "The Sine of ";
	cout << x;
	cout << " is ";
	cout << sin(x);
	cout << "\n\n";
}

// Function for Cos, using radians
void CosRad(double x){
	cout << "The Cosine of ";
	cout << x;
	cout << " is ";
	cout << cos(x);
	cout << "\n\n";
}

// Function for Tangent, using radians
void TanRad(double x){
	cout << "The Tangent of ";
	cout << x;
	cout << " is ";
	cout << tan(x);
	cout << "\n\n";
}

// Function for Co-Secant, using radians
void CscRad(double x){
	cout << "The Co-Secant of ";
	cout << x;
	cout << " is ";
	cout << 1/sin(x);
	cout << "\n\n";
}

// Function for Secant, using radians
void SecRad(double x){
	cout << "The Secant of ";
	cout << x;
	cout << " is ";
	cout << 1/cos(x);
	cout << "\n\n";
}

// Function for Co-Tangent, using radians
void CotRad(double x){
	cout << "The Co-Tangent of ";
	cout << x;
	cout << " is ";
	cout << 1/tan(x);
	cout << "\n\n";
}