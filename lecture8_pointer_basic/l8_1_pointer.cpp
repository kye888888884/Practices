#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i = 10;
    int j = 20;
    int k = 30;
    int n;
    int *p;

    cout << "&i = " << &i << endl;
    cout << "&j = " << &j << endl;
    cout << "&k = " << &k << endl;

    cout << "input p: ";
    cin >> hex >> n;
    p = (int *)n;
    cout << "*p = " << *p << endl;

    return 0;
}