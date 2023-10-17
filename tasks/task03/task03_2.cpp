#include <iostream>

using namespace std;

int main()
{
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds / 86400 << " days, " << (seconds % 86400) / 3600 << " hours, " << seconds % 3600 / 60 << " minutes, " << seconds % 3600 % 60 << " seconds" << endl;
    return 0;
}