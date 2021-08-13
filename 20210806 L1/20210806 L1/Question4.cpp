#include <iostream>
#include <string>

using namespace std;
string wx;
string month;
int TH=0, TR=0, TC=0, year, days, flag;
string function(int no) {
	cout << "Day " << no << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
	cin >> wx;
	while (!(wx == "H" || wx == "h" || wx == "R" || wx == "r" || wx == "C" || wx == "c" || wx == "E" || wx == "e")) {
		cout << "\nWrong Input!\nDay " << no << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> wx;
	}
	return wx;
}

int getdays(string Month, int Years) {
	while (flag==1){
		if (Years < 0) {
			cout << "Wrong Input of Year!";
			flag= 1;
		}
		else {
			if (Month == "January" || Month == "March" || Month == "May" || Month == "July" || Month == "August" || Month == "October" || Month == "December") {
				days = 31;
				flag = 0;
				break;
			}
			else if (Month == "April" || Month == "June" || Month == "September" || Month == "November") {
				days = 30;
				flag = 0;
				break;
			}
			else if (Month == "February") {
				flag = 0;
				if (Years % 4 == 0) {
					days = 29;
				}
				else {
					days = 28;
				}
				break;
			}
			else {
				cout << "Wrong Input of Month!" << endl;
				flag = 1;
			}
			cout << "Enter Your Month Again (e.g. August 2019): ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> Month >> Years;
		}
	}
	return days;
}

int main() {
	flag = 1;
	cout << "Enter Your Month (e.g. August 2019): ";
	cin >> month >> year;
	while (cin.fail()) {
		cout << "Wrong Input!" << endl;
		cout << "Enter Your Month Again (e.g. August 2019): ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> month >> year;
	}
	days = getdays(month, year);
	cin.clear();
	cin.ignore(256, '\n');
	for (int i = 1; i <= days; i++) {
		function(i);
		if (wx == "H" || wx == "h") {
			TH += 1;
		}
		else if (wx == "R" || wx == "r") {
			TR += 1;
		}
		else if (wx == "C" || wx == "c") {
			TC += 1;
		}
		else if (wx == "E" || wx == "e") {
			break;
			return 1;
		}
		else {
			cout << "Wrong Input!";
		}
	}
	cout << "\nNumber of hot days this month\t:" << TH;
	cout << "\nNumber of rainy days this month\t:" << TR;
	cout << "\nNumber of cloud days this month\t:" << TC << endl;
}