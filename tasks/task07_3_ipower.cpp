#include <iostream>
using namespace std;

int ipower(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= n;
    }
    return result;
}

int main()
{
    int n;
    cout << "input number: ";
    cin >> n;

    for (int i = 0; i <= 10; i++)
    {
        cout << n << "^" << i << " = " << ipower(n, i) << endl;
    }
    return 0;
}