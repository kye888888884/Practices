#include <iostream>
using namespace std;

struct mystr
{
    int i;
    void (*ptr)();
};

void func() { cout << "Good!" << endl; }
void gunc() { cout << "Bad!" << endl; }

int main()
{
    mystr a;
    a.ptr = func;
    a.ptr();
}