#include <iostream>
#include <cmath>
using namespace std;

float dist_2d(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
    float x1, y1, x2, y2;
    cout << "Input x1, y1: ";
    cin >> x1 >> y1;
    cout << "Input x2, y2: ";
    cin >> x2 >> y2;
    cout << "Distance: " << dist_2d(x1, y1, x2, y2) << endl;
    return 0;
}