#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void graph(int len, int dot)
{
    for (int i = 0; i < len; i++)
    {
        if (i < dot)
            cout << "@";
        else
            cout << "*";
    }
    cout << endl;
}

int main()
{
    int n, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0;
    srand((unsigned int)time(NULL));
    cout << "Roll a dice 'n' times: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 6 + 1;
        if (x == 1)
            x1++;
        else if (x == 2)
            x2++;
        else if (x == 3)
            x3++;
        else if (x == 4)
            x4++;
        else if (x == 5)
            x5++;
        else if (x == 6)
            x6++;
    }
    cout << "1: ";
    graph(n, x1);
    cout << "2: ";
    graph(n, x2);
    cout << "3: ";
    graph(n, x3);
    cout << "4: ";
    graph(n, x4);
    cout << "5: ";
    graph(n, x5);
    cout << "6: ";
    graph(n, x6);
    return 0;
}