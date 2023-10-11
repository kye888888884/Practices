#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char passwd[5] = "1234";
    char str[5];

    cout << "input: ";
    cin >> str;

    if (strcmp(passwd, str) == 0) {
        cout << "correct!" << endl;
    } else {
        cout << "incorrect!" << endl;
    }

    cout << "passwd: " << passwd << endl;
    cout << "str: " << str << endl;

    return 0;
}