#include <iostream>

using namespace std;

int main()
{
    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit." << endl;
    return 0;
}