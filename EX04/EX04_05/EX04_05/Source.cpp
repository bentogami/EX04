#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	Course math("Calculus III", 2);

	math.addStudent("Kim");
	math.addStudent("Sue");
	math.addStudent("Bob");

	math.dropStudent("Sue");

	string* students = math.getStudents();
	for (int i = 0; i < math.getNumberOfStudents(); i++)
		cout << students[i] << endl;
}