#include <iostream>
using namespace std;

int main()
{
    int n, a;
    string s;

    cout << "Input your number: ";
    cin >> n;

    if (n >= 1000)
    {
        a = n / 1000;
        switch (a)
        {
        case 1:
            s = "one";
            break;
        case 2:
            s = "two";
            break;
        case 3:
            s = "three";
            break;
        case 4:
            s = "four";
            break;
        case 5:
            s = "five";
            break;
        case 6:
            s = "six";
            break;
        case 7:
            s = "seven";
            break;
        case 8:
            s = "eight";
            break;
        case 9:
            s = "nine";
            break;
        default:
            s = "zero";
            break;
        }
        cout << "thousands: " << s << endl;
    }
    if (n >= 100)
    {
        a = (n % 1000) / 100;
        switch (a)
        {
        case 1:
            s = "one";
            break;
        case 2:
            s = "two";
            break;
        case 3:
            s = "three";
            break;
        case 4:
            s = "four";
            break;
        case 5:
            s = "five";
            break;
        case 6:
            s = "six";
            break;
        case 7:
            s = "seven";
            break;
        case 8:
            s = "eight";
            break;
        case 9:
            s = "nine";
            break;
        default:
            s = "zero";
            break;
        }
        cout << "hundreds: " << s << endl;
    }
    if (n >= 10)
    {
        a = (n % 100) / 10;
        switch (a)
        {
        case 1:
            s = "one";
            break;
        case 2:
            s = "two";
            break;
        case 3:
            s = "three";
            break;
        case 4:
            s = "four";
            break;
        case 5:
            s = "five";
            break;
        case 6:
            s = "six";
            break;
        case 7:
            s = "seven";
            break;
        case 8:
            s = "eight";
            break;
        case 9:
            s = "nine";
            break;
        default:
            s = "zero";
            break;
        }
        cout << "tens: " << s << endl;
    }
    a = n % 10;
    switch (a)
    {
    case 1:
        s = "one";
        break;
    case 2:
        s = "two";
        break;
    case 3:
        s = "three";
        break;
    case 4:
        s = "four";
        break;
    case 5:
        s = "five";
        break;
    case 6:
        s = "six";
        break;
    case 7:
        s = "seven";
        break;
    case 8:
        s = "eight";
        break;
    case 9:
        s = "nine";
        break;
    default:
        s = "zero";
        break;
    }
    cout << "ones: " << s << endl;

    return 0;
}