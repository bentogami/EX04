#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	int SIZE = 4;
	int *arr = new int[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = 1;
	}

	cout << "Old size: " << sizeof(arr) << endl;

	int *bigarr = doubleCapacity(arr, SIZE);
	cout << "New size: " << sizeof(bigarr) << endl;

	for (int i = 0; i < SIZE * 2; i++) {
		cout << "bigarr slot " << i + 1 << " " << bigarr[i] << endl;
	}

	delete[] bigarr;
	return 0;
}

int* doubleCapacity(const int* list, int size) {
	//declaring a new pointer array of twice the size
	int *biglist = new int[2 * size];
	
	//Inputting all the data from the old array
	for (int i = 0; i < size; i++) {
		biglist[i] = list[i];
	}

	//Initializing all the data for the new array to be 0
	for (int *curr = biglist + size; curr < biglist + 2 * size; curr++) {
		*curr = 0;
	}

	//deleting the old array so it doesn't bother us
	delete[] list;

	//returning the new, bigger array
	return biglist;
}