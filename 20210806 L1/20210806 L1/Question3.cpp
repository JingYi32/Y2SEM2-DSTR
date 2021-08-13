#include <iostream>
#include <string>

using namespace std;

int main() {
	int col, no=1;
	cout << "Enter a number: ";
	cin >> col;
	if (!cin.fail()) {
		for (int i = 0; i < col; i++) {
			for (int j = 0; j < i + 1; j++) {
				cout << no << "\t";
				no++;
			}
			cout << endl;
		}

		for (int i = col; i > 0; i--) {
			for (int j = i -1 ; j > 0; j--) {
				cout << no << "\t";
				no++;
			}
			cout << endl;
		}
	}
	return 0;
}