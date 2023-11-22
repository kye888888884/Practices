#include <iostream>
using namespace std;

struct INT {
    int a;
    int b;
}; // 8

struct mystruct {
    INT myint;
    int x;
};

int main()
{
    mystruct a;
    cout << sizeof(a) << endl; // padding
    return 0;
}