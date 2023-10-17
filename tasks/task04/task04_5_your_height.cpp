#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Input your height: ";
    cin >> height;

    float inch = height / 2.54;
    int feet = inch / 12;
    inch -= feet * 12;

    cout << height << "cm is " << feet << " feet " << inch << " inch." << endl;

    return 0;
}