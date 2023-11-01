#include <iostream>
using namespace std;

void func(int *num)
{
    cout << num << endl;
    cout << num[0] << endl;
    cout << *(num + 1) << endl;
    cout << *(num + 2) << endl;
    cout << *(num + 3) << endl;
    cout << *(num + 4) << endl;
}

int main()
{
    int i = 100;
    int num[] = {10, 20, 30, 40};
    int *ptr = num;

    ptr = &i;
    // num = &i; // error

    cout << num << endl;
    func(num);
    return 0;
}