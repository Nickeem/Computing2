#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int,std::string,std::string,std::string,int);
	~Person();
	int code;
	std::string first_name;
	std::string last_name;
	std::string city;
	int age;

private:

};

Person::Person(int co, std::string FN, std::string LN, std::string c, int a)
{
	code = co;
	first_name = FN;
	last_name = LN;
	city = c;
	age = a;
}

Person::~Person()
{
}

class Members
{
public:
	Members();
	~Members();
	vector<Person> mem;

private:

};

Members::Members()
{
	string line,code, fname, lname, city,age;
	//int code, age;
	ifstream file("members.txt");
	while (file >> code >> fname >> lname >> city >> age) {
		if (code == "code") { continue; }
		mem.push_back(Person(stoi(code), fname, lname, city, stoi(age)));
	}
	file.close();
}

Members::~Members()
{
}
