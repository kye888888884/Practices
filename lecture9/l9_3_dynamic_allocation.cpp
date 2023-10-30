#include <iostream>
using namespace std;

int *func()
{
    // int num[] = {10, 20, 30, 40};
    int *num = new int[4]; // new: 동적 할당 연산자, heap space에 할당
    num[0] = 10; num[1] = 20; num[2] = 30; num[3] = 40;
    return num;
}

void gunc() {
    int num[] = {123, 456, 789, 876};
}

int main()
{
    int *ptr;
    ptr = func();

    cout << *ptr << endl;
    gunc();

    cout << *ptr << endl; 
    cout << *(ptr+4) << endl; 
    return 0;
}