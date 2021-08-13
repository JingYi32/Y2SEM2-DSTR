#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c;
	cout << "Enter two integers: ";
	cin >> a >> b;
	c = a % b;
	if (c != 0) {
		cout << a << " is not a multiple of "<< b;
	}
	else {
		cout << a << " is a multiple of " << b;
	}
}