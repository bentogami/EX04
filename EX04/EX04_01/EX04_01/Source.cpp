#include <iostream>
using namespace std;

void prompt_size(int *size);
int *alloc_array(int size);
void populate_values(int numbers[], int size);
double average(int numbers[], int size);
int count_above(int numbers[], int size, double average);

int main()
{
	int n;

	//Setting size
	prompt_size(&n);
	//Generating new array
	int *nums = alloc_array(n);
	//Populate the array with input numbers
	populate_values(nums, n);
	//Find the average of those numbers
	double ave = average(nums, n);
	//Find the numbers greater than that average and print this out:
	cout << "The average is " << ave << " and there are " << count_above(nums, n, ave)
		 << " numbers greater than that.";

	return 0;
}

void prompt_size(int *size) {
	cout << "How many numbers will you enter? ";
	//getting the size of the array that the user wants
	//and saving it to the space of whatever int we want in main
	cin >> *size;
}

int *alloc_array(int size) {
	//Establishing the dynamic array
	int *newArray = new int[size];
	//Initializing all values held to zero
	for (int i = 0; i < size; i++) {
		newArray[i] = 0;
	}
	//returning shiny new array
	return newArray;
}

void populate_values(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
}

double average(int numbers[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += static_cast<double>(numbers[i]);
	}
	return (sum / static_cast<double>(size));
}

int count_above(int numbers[], int size, double average) {
	int numbersAbove = 0;
	for (int i = 0; i < size; i++) {
		if (static_cast<double>(numbers[i]) > average)
			numbersAbove++;
	}
	return numbersAbove;
}