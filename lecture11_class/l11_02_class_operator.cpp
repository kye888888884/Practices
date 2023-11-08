#include <iostream>
using namespace std;

class Klass
{
public:
    int a;
    int b;

    Klass operator+(int v) // & 붙이면 안됨
    {
        Klass temp = *this;
        temp.a += v;
        temp.b += v;
        return temp;
    }

    Klass operator+(Klass v)
    {
        Klass temp = *this;
        temp.a += v.a;
        temp.b += v.b;
        return temp;
    }
    Klass operator+(string s)
    {
        Klass temp = *this;
        temp.a += s.length();
        temp.b += s.length();
        return temp;
    }
};

int main()
{
    Klass k, l;

    Klass a, b;
    b = a;

    k.a = 100;
    k.b = 200;
    l.a = 300;
    l.b = 400;
    k = k + 50;
    l = l + k;
    l = l + string("hello");
    cout << k.a << " " << k.b << endl;
    cout << l.a << " " << l.b << endl;
    return 0;
}