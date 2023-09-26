#include <iostream>

using namespace std;

int main()
{
    short length, width, height;
    cout << "Input length: ";
    cin >> length;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "Box volume: " << length * width * height << endl;
    return 0;
}