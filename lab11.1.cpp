#include <iostream>
using namespace std;

int main() {

	int month;

	cout << "Enter month (1-12): ";
	cin >> month;

	switch (month) {
	case 1: "January"; break;
	case 2: "February"; break;
	case 3: "March"; break;
	case 4: "April"; break;
	case 5: "May"; break;
	case 6: "June"; break;
	case 7: "Jule"; break;
	case 8: "August"; break;
	case 9 : "September"; break;
	case 10: "October"; break;
	case 11: "November"; break;
	case 12: "Decembr"; break;
	} 
	
	int quarter;
	quarter = (month - 1) / 3 + 1;

	cout << "Number quartal: " << quarter << endl;
	cout << "Your month: " << month;

	return 0;
}