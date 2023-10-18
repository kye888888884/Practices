#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "string1: ";
    getline(cin, s1);

    cout << "string2: ";
    getline(cin, s2);

    int i = 0;
    bool found = false;
    while (i <= s1.length() - s2.length() && !found)
    {
        found = true;
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i + j] != s2[j])
            {
                found = false;
                break;
            }
        }
        i++;
    }

    if (found)
    {
        cout << i - 1 << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}