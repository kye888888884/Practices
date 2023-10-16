#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input height: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int len = -abs(2 * (i - (n - 1) / 2)) + n;
        for (int j = 0; j < (n - len) / 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < len; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}