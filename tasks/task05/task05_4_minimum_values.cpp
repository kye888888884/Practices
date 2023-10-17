#include <iostream>
using namespace std;

int main()
{
    int a, b, c, m;

    cout << "Input numbers: ";
    cin >> a >> b >> c;

    m = a;
    if (b < m)
    {
        m = b;
    }
    if (c < m)
    {
        m = c;
    }

    cout << "minimum number: " << m << endl;

    return 0;
}