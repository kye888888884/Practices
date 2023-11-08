#include <iostream>
using namespace std;

class INT
{
private:
    int n;

public:
    INT(int a = 10) : n(a) {} // conversion constructor
    INT(int *a) : n(*a) {}

    operator int()
    { // conversion operator
        return n;
    }

    INT operator+(INT v)
    {
        return INT(this->n + v.n);
    }
    INT &operator=(int a)
    {
        n = a;
        return *this;
    }
    int *operator&()
    {
        return &n;
    }
};

int main()
{
    INT x = 100;
    INT y = 200;
    int *p = &x;
    x = x + y;
    *p += 5;

    cout << x << endl;
    cout << *p << endl;
    return 0;
}