#include <iostream>

// Function for Sine
void SinFunc(int x){
	using namespace std;

	cout << "The Sine of ";
	cout << x;
	cout << " is ";
	cout << sin(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Cosine
void CosFunc(int x){
	using namespace std;

	cout << "The Cosine of ";
	cout << x;
	cout << " is ";
	cout << cos(x*0.0174532888888889);
	cout << "\n\n";
}

// Function for Tangent
void TanFunc(int x){
	using namespace std;

	cout << "The Tangent of ";
	cout << x;
	cout << " is ";
	cout << tan(x*0.0174532888888889);
	cout << "\n\n";
}