#include <iostream>

using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjacentDuplicates(int array[], int size);
bool hasDuplicates(int array[], int size);

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
		cout << "\nThe data is increasing" << endl;
	}
	else if (isSortedIncreasing(array, size) == false) {
		cout << "\nThe data is not increasing" << endl;
	}

	if (isSortedDecreasing(array, size) == true) {
		cout << "The data is decreasing." << endl;
	}
	else if (isSortedDecreasing(array, size) == false) {
		cout << "The data is not decreasing." << endl;
	}
	
	if (hasAdjacentDuplicates(array, size) == true) {
		cout << "The data has adjacent duplicates." << endl;
	}
	else if (hasAdjacentDuplicates(array, size) == false) {
		cout << "The data does not have adjacent duplicates." << endl;
	}

	if (hasDuplicates(array, size) == true) {
		cout << "The data has duplicates." << endl;
	}
	else if (hasDuplicates(array, size) == false) {
		cout << "The data does not have duplicates." << endl;
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

bool hasAdjacentDuplicates(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (array[i] == array[i + 1]) {
			return true;
		}
	}
	return false;
}

bool hasDuplicates(int array[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] == array[j]) {
				return true;
			}
		}
	}
	return false;
}