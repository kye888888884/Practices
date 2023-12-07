#include <iostream>
#include <cstring>
using namespace std;

char *mystrcat(const char *str1, const char *str2)
{
    char *str = (char *)malloc(strlen(str1) + strlen(str2) + 1);
    for (int i = 0; i < strlen(str1); i++)
        str[i] = str1[i];
    for (int i = 0; i < strlen(str2); i++)
        str[i + strlen(str1)] = str2[i];
    str[strlen(str1) + strlen(str2)] = '\0';
    return str;
}

int main()
{
    char *str = mystrcat("Hello!", "World!");
    cout << str << endl;
}