#include <iostream>
#include <string>

using namespace std;

int main() {
	int no;
	cout << "Kindly enter a number between 1 to 10: ";
	cin >> no;
	
	while (no>10 || no<0 || cin.fail()) {
		cout << "Wrong Input! \nKindly enter a number between 1 to 10: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> no;
	}
	switch (no) {
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	case 10:
		cout << "X";
	}
}