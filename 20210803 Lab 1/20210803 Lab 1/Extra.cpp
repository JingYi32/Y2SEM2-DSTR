/*Compute the total cost of a meal inclusive of GST (Goods
and Service Tax) and tipping. Assume that the GST is fixed at 
6% but the amount to tip will depend on the customer.
Your program should input the cost of the meal (before GST and 
tipping) and the tip amount (to be input as a percentage).
Your program should display:
• The total cost of the meal BEFORE GST and tipping
• The total cost of the meal AFTER GST
• The total cost of the mea lAFTER GST and tipping*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	double cost, tip, GST, total;
	cout << "Kindly enter the cost of the meal\t: RM ";
	cin >> cost;
	while (cin.fail()) {
		cout << "Wrong Input! Kindly insert a numeric value! \nKindly enter the cost of the meal\t: RM ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> cost;
	}
	cout << "Kindly enter the tip amount\t\t: RM ";
	cin >> tip;
	while (cin.fail()) {
		cout << "Wrong Input! Kindly insert a numeric value! \nKindly enter the tip amount\t: RM ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> tip;
	}
	GST = cost * 1.06;
	cout << "\nHere is the summary of the meal:\n\nThe total cost of the meal BEFORE GST and tipping\t: RM" << cost;
	cout << "\nThe total cost of the meal AFTER GST\t\t\t: RM" << GST;
	cout << "\nThe total cost of the mea lAFTER GST and tipping\t: RM" << GST+tip << endl;
}