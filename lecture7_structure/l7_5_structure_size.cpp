#include <iostream>
using namespace std;

struct position
{
    int x;
    int y;
};

position func(position pos)
{
    cout << sizeof(pos) << endl; // array decay 문제를 피할 수 있다. 단, 속도가 느려질 수 있다.
    return pos;
}

int main()
{
    position pos = {1, 2};

    position pos2 = func(pos);

    cout << pos.x << endl;
    cout << pos2.x << endl;

    return 0;
}