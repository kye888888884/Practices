#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "Factorial( " << n << " )\n";
    if (n == 0)
        return 1; // 초기 조건
    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(6) << endl;
    return 0;
}