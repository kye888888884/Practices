#include <iostream>
using namespace std;

void g(int i, int j)
{
    int k;
}

void f(void)
{
    int x, y, z;
    g(x, y);
}

int main()
{
    int a, b, c;
    f();
    return 0;

    /*
    ------------------
    k
    x = i
    y = j
    g stack frame
    ------------------
    z
    y
    x
    f stack frame
    ------------------
    c
    b
    a
    main stack frame
    ------------------
    */
}