#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    A() : x(10), y(20) {}
};

class B
{
public:
    int i, j, k;
    B(A &a) : i(a.x), j(a.y), k(a.x + a.y)
    {
    }
};

int main()
{
    A a;
    B b(a);
    cout << b.i << " " << b.j << " " << b.k << endl;
    return 0;
}