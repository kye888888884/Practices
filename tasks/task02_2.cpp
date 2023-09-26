#include <iostream>
using namespace std;
int main()
{
    string name, id;
    cout << "My name is ";
    getline(cin, name);

    cout << "My student ID is ";
    cin >> id;

    cout << "My name and ID is " << name << " and " << id << "." << endl;

    return 0;
}