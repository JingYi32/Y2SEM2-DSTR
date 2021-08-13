//Write a program that determines a student¡¯s grade. The program will read three types of scores in percentage(quiz, mid - term, and final scores)

#include <iostream>
#include <string>

using namespace std;

int main() {
	int Q, MT, FS, AVE;
	string grade;
	cout << "Enter 3 scores (quiz, mid-term, and final) vales separated by space: ";
	cin >> Q >> MT >> FS;
	
	while (cin.fail()) {
		cout << "Wrong Input! \nKindly enter number between 1 to 100: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> Q >> MT >> FS;
	}
	AVE = (Q + MT + FS) / 3;
	if (AVE >= 90) {
		grade = "A";
	}
	else if (AVE >= 70 && AVE < 90) {
		grade = "B";
	}
	else if (AVE >= 50 && AVE < 70) {
		grade = "C";
	}
	else {
		grade = "F";
	}
	cout << "Your Grade is " << grade;
}