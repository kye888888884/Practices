#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // create heap memory, dynamic memory allocation
    *p = 1024;
    delete p; // okay!

    int a = 1024; // create stack memory
    delete &a;    // error! stack memory cannot be deleted

    int arr_size;
    cin >> arr_size;
    int *arr = new int[arr_size]; // sizeof(int) * arr_size

    for (int i = 0; i < arr_size; i++)
        arr[i] = i;

    delete[] arr; // delete array

    return 0;
}