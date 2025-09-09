 //This is a C++ program by Sudarsana Buragohain
 #include <iostream>
 using namespace std;
 int main ()
 {
 	// Variable to store temperature in celcius;
 	float celcius;
 	cout << "Enter temperature in celcius: ";
 	cin >> celcius;
 	// Convert Celcius to Farenheit
 	float farenheit = (celcius*9.0/5.0)+32;
 	// Disply the result
 	cout << "Temperature in Farenheit: " << farenheit << endl;
 	return 0;
 }