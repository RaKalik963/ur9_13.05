#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int FULL_SIZE = 15;
	int arr[FULL_SIZE];
	int size;
	int count = 0;

	cout << "Enter a size of array:";
	do {
		cin >> size;
	} while (size > FULL_SIZE || size <= 0);

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20 - 10;
	}

	cout << "Array before changes:" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] != 0) {
			arr[count++] = arr[i];
		}
	}
	cout << endl;
	cout << "Array after changes:" << endl;

	for (int i = 0; i < size; i++) {
		if (i >= count) {
			arr[i] = -1;
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
