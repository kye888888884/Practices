#include <iostream>
using namespace std;

int main()
{
    string a = "12341234";

    for (int i = 0; i < a.length(); i++)
    {
        cout << a[i];
        if ((a.length() - i - 1) % 3 == 0 && i < a.length() - 1)
            cout << ",";
    }

    cout << endl;

    return 0;
}