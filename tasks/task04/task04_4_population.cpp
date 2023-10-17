#include <iostream>

using namespace std;

int main()
{
    long long world;
    long long kor;

    cout << "Enter the world's population: ";
    cin >> world;

    cout << "Enter the population of Korea: ";
    cin >> kor;

    cout << "The population of Korea is " << (double)kor / world * 100 << "% of the world population." << endl;
    return 0;
}