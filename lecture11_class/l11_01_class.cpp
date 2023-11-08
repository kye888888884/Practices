#include <iostream>
using namespace std;

struct Glass
{
    void gunc(char ch)
    {
        cout << "gunc" << endl;
    }
};

class Klass
{
public:
    int a;
    int b;

    Klass &func(char ch)
    {
        cout << "func(): " << ch << endl;
        a++;
        return *this;
    }
};

int main()
{
    Klass k;
    k.a = 100;
    k.func('f').func('h').func('i');

    cout << k.a << endl;
    return 0;
}