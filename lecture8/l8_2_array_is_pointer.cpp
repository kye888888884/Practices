#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    unsigned char a[16] = {
        0x11, 0x22, 0x33, 0x44,
        0x55, 0x66, 0x77, 0x88,
        0x99, 0xAA, 0xBB, 0xCC,
        0xDD, 0xEE, 0xFF, 0x00};

    char *c = (char *)a;
    int *i = (int *)a;
    long long *l = (long long *)a;

    cout << hex;
    cout << "c = " << (int)*c << endl;
    cout << "i = " << *i << endl;
    cout << "l = " << *l << endl;

    printf("c[0] = %x\n", c[0]);
    printf("c[1] = %x\n", c[1]);
    printf("c[2] = %x\n", c[2]);
    printf("c[3] = %x\n", c[3]);

    printf("i[0] = %x\n", i[0]);
    printf("i[1] = %x\n", i[1]);
    printf("i[2] = %x\n", i[2]);
    printf("i[3] = %x\n", i[3]);

    return 0;
}