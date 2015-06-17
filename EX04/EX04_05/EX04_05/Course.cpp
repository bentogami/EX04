#include "Course.h"
#include <iostream>
using namespace std;

string* doubleStudents(const string* list, int size);

Course::Course(const string& courseName, int capacity) 
{
	numStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course() 
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{	
	students[numStudents] = name;
	numStudents++;	
	if (numStudents == capacity - 1) {
		students = doubleStudents(students, capacity);
		capacity *= 2;
	}
}

//Initialized dropStudent() function
void Course::dropStudent(const string& name)
{
	bool found = false;
	for (int i = 0; i < numStudents; i++)
	{		
		if (students[i] == name)
		{
			students[i].clear();
			for (int j = i; j < numStudents; j++)
				students[j] = students[j + 1];
			found = true;
		}
	}
	if (!found)
		cout << "Student not found.\n";
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numStudents;
}

//Deep copy initialization
Course::Course(const Course& course) 
{
	courseName = course.courseName;
	capacity = course.capacity;
	numStudents = course.numStudents;
	students = new string[capacity];
}

//Initialized clear() function
void Course::clear()
{
	delete[] students;
	students = new string[capacity];
}

//Doubling capacity of student array
string* doubleStudents(const string* list, int size)
{
	string* bigClass = new string[2 * size];
	for (int i = 0; i < size; i++)
		bigClass[i] = list[i];
	for (int j = size; j < 2 * size; j++)
		bigClass[j] = "";
	delete[] list;
	return bigClass;
}