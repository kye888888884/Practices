#include <iostream>
using namespace std;

struct mystruct
{
    short x;
    short y;
};

int main()
{
    mystruct a;
    a.x = 0xAABB;
    a.y = 0xCCDD;

    cout << hex << a.x << endl;
    cout << hex << a.y << endl;

    cout << hex << *((short *)&a) << endl;
    cout << hex << *((int *)&a) << endl; // 내 맘대로 decode

    return 0;
}