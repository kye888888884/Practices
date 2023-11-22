#include <iostream>
using namespace std;

void func(int p)
{
    static int cnt = 0;
    if (cnt == 10)
        return;

    cout << cnt << endl;
    cnt++;
    func(cnt);
    cout << p << endl;

    return;
}

int main()
{
    func(0);
    return 0;
}