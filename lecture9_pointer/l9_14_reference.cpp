#include <iostream>
using namespace std;

int put3(int (&num)[4])
{
    cout << num[2] << endl;
}

int main()
{
    int num[4] = {10, 20, 30, 40};
    put3(num);

    struct
    {
        struct
        {
            string is;
        } name;
    } my = {{"kyh"}};
    string &shortcut = my.name.is;
    cout << shortcut << endl;
    return 0;
}