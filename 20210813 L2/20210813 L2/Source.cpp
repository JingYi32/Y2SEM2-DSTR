#include <iostream>
#include <string>
using namespace std;

int total(int arraym[5][4], int x) {
	int Q1, Q2, Q3;
	Q1 = arraym[x][0] / 2;
	Q2 = arraym[x][1] / 2;
	Q3 = arraym[x][2] / 2;
	int Total = Q1 + Q2 + Q3;

	return Total;
}

string grade(int arraym[5][4], int x) {
	int ave = arraym[x][3];
	string gradee;
	if (ave >= 75 && ave <= 100) {
		gradee = "A";
	} 
	else if (ave >= 60 && ave <= 74) {
		gradee = "B";
	} 
	else if (ave >= 40 && ave <= 59) {
		gradee = "C";
	} 
	else if (ave >= 20 && ave <= 39) {
		gradee = "D";
	}
	else if (ave >= 0 && ave <= 19) {
		gradee = "F";
	}
	return gradee;
}

int main() {
	string title[] = { "Student Name", "Student ID", "Age", "Quiz 1", "Quiz 2", "Quiz 3", "Total", "Grade"};

	string students[5][3] = { 
		{"Johathan Liew", "TP012343", "23"}, 
		{"Mandy Hogwat", "TP012733", "21"}, 
		{"Ali John", "TP012876", "21"}, 
		{"Ho Jin Wen", "TP012333", "23"}, 
		{"Kam LiLI", "TP012564", "22"} 
	};

	int marks[5][4] = { 
		{33, 56, 33, total(marks, 0)}, 
		{45, 23, 55, total(marks, 1)},
		{14, 66, 56, total(marks, 2)},
		{34, 66, 62, total(marks, 3)},
		{47, 44, 56, total(marks, 4)}
	};

	string Grade[] = { 
		grade(marks, 0),
		grade(marks, 1),
		grade(marks, 2),
		grade(marks, 3),
		grade(marks, 4),
	};

	//Print//

	for (int i = 0; i < 8; i++) {
		cout << title[i] << " \t";
	}cout << endl;
	int m = 5, n = 3, o =4;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << students[i][j] << " \t";
		} 
		for (int k = 0; k < o; k++) {
			cout << marks[i][k] << " \t";
		}
		cout << Grade[i];
		cout << endl;
	}

	return 0;
}

