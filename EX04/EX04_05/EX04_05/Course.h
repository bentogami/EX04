#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Student.h"

class Course {
private:
	string courseName;
	string *students;
	int numStudents;
	int capacity;

public:
	Course(const string& courseName, int capacity);
	~Course();
	//Deep copy:
	Course(const Course& course);

	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;

	//Declaring clear() function:
	void clear();
};

#endif