#include <iostream>
using namespace std;

int findSmallest(int nums[], int size);
void promptArray(int &size);
int* allocArray(int size);
void populateArray(int nums[], int size);


int main() 
{
	int n;

	promptArray(n);
	int* storedNums = allocArray(n);
	populateArray(storedNums, n);

	cout << "The smallest number you entered was " << 
		findSmallest(storedNums, n) << endl;
}

void promptArray(int &size) {
	cout << "How many numbers will you enter? ";
	cin >> size;
}

int findSmallest(int nums[], int size) {
	int *smallest = new int;
	smallest = nums;
	for (int* curr = nums; curr < nums + size; curr++) {
		if (*curr < 0)
			*curr *= -1;
		if (*curr < *smallest)
			*smallest = *curr;
	}
	return *smallest;
}



int* allocArray(int size) {
	int *newArray = new int[size];
	return newArray;
}

void populateArray(int nums[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: ";
		cin >> nums[i];
	}
}