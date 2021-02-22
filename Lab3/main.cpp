#include <iostream>
#include "Date.h"
using namespace std;



int main() {
	int day, month, year;
	Date date1;
	cout << "The initialized date is D-M-Y: " << date1.getDay() << "-" << date1.getMonth() << "-" << date1.getYear() << endl;
	cout << "Enter first date(D-M-Y): ";
	cin >> day;
	cin >> month;
	cin >> year;
	date1.setDay(day);
	date1.setMonth(month);
	date1.setYear(year);


	cout << "Enter second date(D-M-Y): ";
	cin >> day;
	cin >> month;
	cin >> year;
	Date date2(day, month, year);
   	date1.printDate();
	date2.printDate();
	if (date1.sameMonth(date2) == true) {
		cout << "The months are the same";
	}
	else {
		cout << "The months are not the same";
	}
	return 0;

}
