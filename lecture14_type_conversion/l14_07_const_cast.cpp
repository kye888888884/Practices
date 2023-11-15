#include <iostream>
using namespace std;

int main()
{
    char str[] = "Hello";
    const char *ptr = str;

    // ptr[0] = 'A'; // error
    char *c = const_cast<char *>(ptr);
    c[0] = 'A';
    cout << str << endl;
    return 0;
}