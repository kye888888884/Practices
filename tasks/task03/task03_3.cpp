#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Input your number: ";
    cin >> number;
    cout << "thousands: " << number / 1000 << endl;
    cout << "hundreds: " << number % 1000 / 100 << endl;
    cout << "tens: " << number % 100 / 10 << endl;
    cout << "ones: " << number % 10 << endl;
    return 0;
}