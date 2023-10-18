#include <iostream>
using namespace std;

int main()
{
    string a;
    int key;
    cout << "Input string: ";
    getline(cin, a);

    cout << "Input key: ";
    cin >> key;

    cout << "Cipher string: ";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 'A' && a[i] <= 'z')
            cout << (char)(a[i] + key);
        else
            cout << a[i];
    }

    cout << endl;

    return 0;
}