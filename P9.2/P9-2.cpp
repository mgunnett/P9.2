#include <iostream>

using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);

int main() {
	int size = 0;

	cout << "How many numbers are you entering? ";
	cin >> size;

	int* array = new int[size];
	
	for (int i = 0; i < size; i++) {
		cout << "Enter integer #" << i + 1 << ": ";
		cin >> array[i];
	}

	if (isSortedIncreasing(array, size) == true) {
		cout << "\nNumbers are increasing" << endl;
	}
	else if (isSortedIncreasing(array, size) == false) {
		cout << "\nNumbers are not increasing" << endl;
	}

	if (isSortedDecreasing(array, size) == true) {
		cout << "Numbers are decreasing" << endl;
	}
	else if (isSortedDecreasing(array, size) == false) {
		cout << "Numbers are not decreasing" << endl;
	}
}

bool isSortedIncreasing(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i + 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] < array[i + 1]) {
			return false;
		}
	}
	return true;
}