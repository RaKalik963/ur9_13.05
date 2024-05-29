#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE1 = 10;
    const int SIZE2 = 5;

    int array1[SIZE1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int array2[SIZE2], array3[SIZE2];

    for (int i = 0; i < SIZE2; ++i) {
        array2[i] = array1[i];
    }

    for (int i = 0; i < SIZE2; ++i) {
        array3[i] = array1[i + SIZE2];
    }

    cout << "Array2: ";
    for (int i = 0; i < SIZE2; ++i) {
        cout << array2[i] << " ";
    }
    cout << endl;

    cout << "Array3: ";
    for (int i = 0; i < SIZE2; ++i) {
        cout << array3[i] << " ";
    }
    cout << endl;

	system("pause");
	return 0;
}