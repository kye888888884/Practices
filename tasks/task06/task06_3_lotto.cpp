#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int n1, n2, n3, n4, n5, n6;
    do
    {
        n1 = rand() % 45 + 1;
        n2 = rand() % 45 + 1;
        n3 = rand() % 45 + 1;
        n4 = rand() % 45 + 1;
        n5 = rand() % 45 + 1;
        n6 = rand() % 45 + 1;
    } while (n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5 || n1 == n6 ||
             n2 == n3 || n2 == n4 || n2 == n5 || n2 == n6 ||
             n3 == n4 || n3 == n5 || n3 == n6 ||
             n4 == n5 || n4 == n6 ||
             n5 == n6);

    cout << n1 << endl
         << n2 << endl
         << n3 << endl
         << n4 << endl
         << n5 << endl
         << n6 << endl;
    return 0;
}