#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (i > 2 && i % 2 == 0)
            continue;
        if (i > 3 && i % 3 == 0)
            continue;
        if (i > 5 && i % 5 == 0)
            continue;
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    while (true)
    {
        cout << "input number: ";
        cin >> n;
        if (n == -1)
            break;
        if (is_prime(n))
            cout << n << " is prime number." << endl;
        else
            cout << n << " is not prime number." << endl;
        cout << endl;
    }
    cout << "Done." << endl;

    return 0;
}