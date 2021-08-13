#include <iostream>
#include <string>

using namespace std;

int main() {
	int feet, inches, cm;
	cout << "Kindly enter the length in feet and inches: ";
	cin >> feet >> inches;
	cm = (feet * 12 + inches) * 2.54;
	cout << "\nThe length in centimeters is " << cm << "cm.\n";
}