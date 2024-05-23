#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 10;
    int arr1[size];
    int arr2[size];
    int result[size];

    for (size_t i = 0; i < size; i++)
    {
        arr1[i] = rand() % 20 - 10;
    }
    
    for (size_t i = 0; i < size; i++)
    {
        arr2[i] = rand() % 20 - 10;
    }
    cout << "Array1: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array2: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    cout << "result ";
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
	system("pause");
	return 0;
}