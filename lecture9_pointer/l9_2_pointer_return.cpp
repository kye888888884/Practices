#include <iostream>
using namespace std;

int *func()
{
    int num[] = {10, 20, 30, 40};
    return num;
}

void gunc()
{
    int num[] = {123, 456, 789, 876};
}

int main()
{
    int *ptr;
    ptr = func();

    cout << *ptr << endl; // 10

    gunc();

    cout << *ptr << endl; // 123s
    return 0;
}