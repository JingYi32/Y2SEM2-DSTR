#include <iostream>
#include <string>

using namespace std;

int main() {
	int AW, AH, AA, BW, BH, BA;
	cout << "Rectangle A: \nWidth\t= ";
	cin >> AW;
	while (cin.fail()) {
		cout << "Wrong Input! \nWidth\t= ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> AW;
	}
	
	cout << "Height\t= ";
	cin >> AH;
	while (cin.fail()) {
		cout << "Wrong Input! \Height\t= ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> AH;
	}

	cout << "\nRectangle B: \nWidth\t= ";
	cin >> BW;
	while (cin.fail()) {
		cout << "Wrong Input! \nWidth\t= ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> BW;
	}

	cout << "Height\t= ";
	cin >> BH;
	while (cin.fail()) {
		cout << "Wrong Input! \Height\t= ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> BH;
	}

	AA = AW * AH;
	BA = BW * BH;

	if (AA > BA) {
		cout << "\nArea of rectangle A is bigger than rectangle B.\n";
	}
	else if (BA > AA) {
		cout << "\nArea of rectangle A is bigger than rectangle B.\n";
	}
	else {
		cout << "\nBoth area is the same.\n";
	}
}