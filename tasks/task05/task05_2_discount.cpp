#include <iostream>
using namespace std;

int main()
{
    int n, p;

    cout << "number of items? ";
    cin >> n;

    p = 1000 * n;

    if (n < 10)
    {
        cout << "price: " << p << " KRW" << endl;
    }
    else
    {
        cout << "original price: " << p << " KRW" << endl;
        cout << "discounted price: " << int(p * 0.9) << " KRW" << endl;
    }

    return 0;
}