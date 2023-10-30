#include <iostream>
using namespace std;

struct Big
{
    int a;
    int b;
    int *c;
};

int main()
{
    Big mystruct;
    int num = 999;

    mystruct.a = 100;
    mystruct.b = 200;
    mystruct.c = &num;

    Big *ptr = &mystruct;

    cout << (*ptr).a << endl;
    cout << ptr->c << endl;
    cout << *ptr->c << endl; // *(ptr->c)와 동일
}