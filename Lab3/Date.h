#pragma once
class Date
{
public:
	Date() : day(1), month(1), year(1) {}
	Date(int, int, int);
	//~Date();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setErr(int);
	void printDate();
	int getDay();
	int getMonth();
	int getYear();
	bool sameMonth(Date&);


private:
	int day, month, year;

};
