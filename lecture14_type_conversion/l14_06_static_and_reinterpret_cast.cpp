#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;
    int *ptr = (int *)&pi;
    cout << *ptr << endl;

    // int *qtr = static_cast<int *>(&pi); // error
    int *rtr = reinterpret_cast<int *>(&pi); // ok, 메모리 공간만 맞으면 됨
    cout << *rtr << endl;
    rtr = reinterpret_cast<int *>(0xAABBCCDD); // ok
    cout << *rtr << endl;
    return 0;
}