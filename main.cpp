#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int FULL_SIZE = 15;
    int arr[FULL_SIZE];
    int size;

    do {
        cout << "Enter the size of the array: ";
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 200 - 100;
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    while (index < FULL_SIZE) {
        arr[index++] = -1;
    }

    cout << "Changed Array: ";
    for (int i = 0; i < FULL_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}