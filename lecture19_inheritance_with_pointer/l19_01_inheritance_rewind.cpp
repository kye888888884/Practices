#include <iostream>
using namespace std;

class PPP
{
    int a = 5;

protected:
    int b = 10;

public:
    void func() { cout << "ppp" << endl; }
};

class CCC //: public PPP
{
    int x;

public:
    void func() { cout << "ccc" << endl }
};

int main()
{
    PPP *p = new PPP;
    CCC c;

    p->func();
    c.func();

    return 0;
}