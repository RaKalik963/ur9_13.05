#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int FULL_SIZE = 10, HALF_SIZE = 5;
	int arr1[HALF_SIZE], arr2[HALF_SIZE], arr3[FULL_SIZE];
	int index = 0;

	for (int i = 0; i < HALF_SIZE; i++) {
		arr1[i] = rand() % 20 - 10;
		arr2[i] = rand() % 20 - 10;
	}

	cout << "First array before changes:" << endl;

	for (int i = 0; i < HALF_SIZE; i++) {
		cout << arr1[i] << " ";
	}
	cout << "\n\nSecond array before changes:" << endl;

	for (int i = 0; i < HALF_SIZE; i++) {
		cout << arr2[i] << " ";
	}

	for (int i = 0; i < HALF_SIZE; i++) {
		if (arr1[i] > 0) {
			arr3[index++] = arr1[i];
		}
		if (arr2[i] > 0) {
			arr3[index++] = arr2[i];
		}
	}
	for (int i = 0; i < HALF_SIZE; i++) {
		if (arr1[i] == 0) {
			arr3[index++] = arr1[i];
		}
		if (arr2[i] == 0) {
			arr3[index++] = arr2[i];
		}
	}
	for (int i = 0; i < HALF_SIZE; i++) {
		if (arr1[i] < 0) {
			arr3[index++] = arr1[i];
		}
		if (arr2[i] < 0) {
			arr3[index++] = arr2[i];
		}
	}

	cout << "\n\nResult array after changes:" << endl;

	for (int i = 0; i < FULL_SIZE; i++) {
		cout << arr3[i] << " ";
	}
}