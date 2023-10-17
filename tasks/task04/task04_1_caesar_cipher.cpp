#include <iostream>
using namespace std;

int main()
{
    string s; // length is must be 8
    int key;

    cout << "Input string: ";
    cin >> s;

    cout << "Input key: ";
    cin >> key;

    cout << "Cipher string: ";
    cout << (char)(s[0] + key);
    cout << (char)(s[1] + key);
    cout << (char)(s[2] + key);
    cout << (char)(s[3] + key);
    cout << (char)(s[4] + key);
    cout << (char)(s[5] + key);
    cout << (char)(s[6] + key);
    cout << (char)(s[7] + key);
    cout << endl;
    return 0;
}