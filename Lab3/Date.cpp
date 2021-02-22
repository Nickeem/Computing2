#include "Date.h"
#include <iostream>
//#include <string>

void Date::setDay(int d) {
	if (d >= 1 && d <= 31) {
		day = d;
	}
	else {
		setErr(0);
		day = 0; // if not set program will return a random number
	}
}
void Date::setMonth(int m) {
	if (m >= 1 && m <= 12) {
		month = m;
	}
	else {
		setErr(1);
		month = 0; // if not set program will return a random number
	}
}

void Date::setYear(int y) {
	if (y <= 2022) {
		year = y;
	}
	else {
		setErr(2);
		year = 0; // if not set program will return a random number
	}
}

void Date::setErr(int n) {
	std::string arr[3] = { "Something went wrong setting value of day", "Something went wrong setting of month", "Something went wrong setting value of year" };
	std::cout << "Error : " << arr[n] << std::endl;
}
void Date::printDate() {
	std::cout << "The date is (D-M-Y): "<< day << "-" << month << "-" << year << std::endl;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}
bool Date::sameMonth(Date& obj) {
	if (this->month == obj.getMonth()){
	//	std::cout << this->month  << " " << obj.getMonth();
		return true;
}
	else {
		false;
	}
}

Date::Date(int d, int m, int y) {
	setDay(d);
	setMonth(m);
	setYear(y);
}
