//I made this class thinking I'd use it, but it turned out to be useless.
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
private:
	string name;
	int year;

public:
	Student() {
		name = "George Whitworth";
		year = 125;
	}
	Student(string n, int y) {
		name = n;
		year = y;
	}

	string getName() { return name; }
	int getYear() { return year; }
};

#endif