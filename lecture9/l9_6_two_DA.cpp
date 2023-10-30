#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    int *qtr = ptr;

    *ptr = 10;
    cout << *ptr << endl;
    cout << *qtr << endl;

    delete ptr;
    // ptr = 0; // dangling pointer 방지
    ptr = nullptr; // 
    cout << *ptr << endl;
    cout << *qtr << endl;
    return 0;
}