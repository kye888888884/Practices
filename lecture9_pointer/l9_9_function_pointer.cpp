#include <iostream>
using namespace std;

void func() {cout << "f" << endl;}
void gunc() {cout << "g" << endl;}
void hunc() {cout << "h" << endl;}
void iunc() {cout << "i" << endl;}

int main()
{
    cout << (void*)&func << endl;
    cout << (void*)&gunc << endl;
    cout << (void*)&hunc << endl;
    cout << (void*)&iunc << endl;
    return 0;
}