#include <iostream>
#include "member.h"
#include <iomanip>
#include <vector>
using namespace std;

int main() {

	int age;
	vector<Person>::iterator i;
	std::cout << "Enter an age: ";
	std::cin >> age;
	Members obj1;
	for ( i = obj1.mem.begin(); i < obj1.mem.end(); i++)
	{
		if ((*i).age > age) {
			cout << left << setw(15) << (*i).code << left << setw(15) << (*i).first_name ;
			cout << left << setw(15) << (*i).last_name << left << setw(15) << (*i).city << left << setw(15) << (*i).age << endl;
		 }

	}
	return 0;
}
