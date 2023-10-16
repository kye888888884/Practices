#include <iostream>
using namespace std;

struct position
{
    int arr[4];
};

int main()
{
    position p1 = {1, 2, 3, 4};

    cout << p1.arr[0] << endl;
    cout << p1.arr[1] << endl;
    cout << p1.arr[2] << endl;
    cout << p1.arr[3] << endl;

    return 0;
}