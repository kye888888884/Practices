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
    operator int()
    {
        return i * j * k;
    }
};

int main()
{
    A a;
    B b(a);
    int c = b;
    cout << b.i << " " << b.j << " " << b.k << endl;
    cout << c << endl;
    return 0;
}