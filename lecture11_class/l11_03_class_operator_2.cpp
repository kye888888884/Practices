#include <iostream>
using namespace std;

class Klass
{
public:
    int a;
    int b;

    Klass operator+(int x) 
    {
        Klass temp = *this;
        temp.a += x;
        temp.b += x;
        return temp;
    }
};

Klass operator+(int x, const Klass &v) // & 붙이면 오버로딩 안됨 (부담 적음)
{
    Klass temp = v;
    temp.a += x;
    temp.b += x;
    return temp;
};

int main()
{
    Klass k, l;

    k.a = 100;
    k.b = 200;
    k = k + 10;
    k = 10 + k; // 10.operator+(k)로 호출됨
    cout << k.a << " " << k.b << endl;
    return 0;
}