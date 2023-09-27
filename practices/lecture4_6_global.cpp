#include <iostream>
using namespace std;

// global 변수
string global;

string save(string in)
{
    if (in != "")
        global = in;
    return global;
}

int main()
{
    save("Hello, world!");

    global = "My world!";

    string get = save("");
    cout << get << endl;

    return 0;
}