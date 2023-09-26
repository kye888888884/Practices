#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    cout << "It is located in the ";
    cout << (x > 0 ? (y > 0 ? "1st" : "4th") : (y > 0 ? "2nd" : "3rd"));
    cout << " quadrant." << endl;
    return 0;
}