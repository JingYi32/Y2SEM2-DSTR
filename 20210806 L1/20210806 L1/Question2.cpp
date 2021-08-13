#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	double price, converted;
	int currency;
	string curr;
	cout << "Kindly enter the cost to convert: RM ";
	cin >> price;
	while (cin.fail() || price <= 0) {
		cout << "\nWrong Input! \nEnter the cost to convert: RM : ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> price;
	}
	cout << "Kindly select which currency you need to convert (type only the number): \n (1) British Pounds\n (2) Canadian dollars\n (3) Japanese yen\nSelection: ";
	cin >> currency;
	if (!cin.fail()) {
		switch (currency)
		{
		case 1:
			converted = price / 5.87;
			curr = " British Pound";
			break;
		case 2:
			converted = price / 3.37;
			curr = " Canadian Dollar";
			break;
		case 3:
			converted = price / 0.038;
			curr = " Japanese Yen";
			break;
		default:
			break;
			return 1;
		}
		cout << "RM " << fixed << setprecision(2) << price << " = " << converted << curr << endl;
	}
	return 0;
}