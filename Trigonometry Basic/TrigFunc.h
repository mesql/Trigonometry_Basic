#include <iostream>
using namespace std;

double Pi = 3.141592654;

// Function for Sine
void SinFunc(double x, double angle){
	
	cout << "The Sine of " << angle << " degrees is " << sin(x) << "\n\n"; //*0.0174532888888889
}
// Function for Cosine
void CosFunc(double x, double angle){

	cout << "The Cosine of " << angle << " degrees is " << cos(x) << "\n\n";
}

// Function for Tangent
void TanFunc(double x, double angle){

	cout << "The Tangent of " << angle << " degrees is " << tan(x) << "\n\n";
}

// Function for Co-Secant
void CscFunc(double x, double angle){
	
	cout << "The Co-Secant of " << angle << " degrees is " << 1/sin(x) << "\n\n";
}

// Function for Secant
void SecFunc(double x, double angle){
	cout << "The Secant of " << angle << " degrees is " << 1/cos(x) << "\n\n";
}

// Function for Co-Tangent
void CotFunc(double x, double angle){
	cout << "The Co-Tangent of " << angle << " degrees is " << 1/tan(x) << "\n\n";
}

// Function for Sin, using radians
void SinRad(double x){	
	cout << "The Sine of " << x << " radians is " << sin(x) << "\n\n";
}

// Function for Cos, using radians
void CosRad(double x){
	cout << "The Cosine of " << x << " radians is " << cos(x) << "\n\n";
}

// Function for Tangent, using radians
void TanRad(double x){
	cout << "The Tangent of " << x << " radians is " << tan(x) << "\n\n";
}

// Function for Co-Secant, using radians
void CscRad(double x){
	cout << "The Co-Secant of " << x << " radians is " << 1/sin(x) << "\n\n";
}

// Function for Secant, using radians
void SecRad(double x){
	cout << "The Secant of " << x << " radians is " << 1/cos(x) << "\n\n";
}

// Function for Co-Tangent, using radians
void CotRad(double x){
	cout << "The Co-Tangent of " << x << " radians is " << 1/tan(x) << "\n\n";
}

// Function to convert degrees into radians
double ConvertToRad(double x){
	double radians;

	radians = x * (Pi/180);

	return radians;
}