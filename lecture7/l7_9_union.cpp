#include <iostream>
using namespace std;

union one4all
{ // 메모리를 공유한다.
    short sh;
    int in;
    long lo;
};

int main()
{
    one4all uni;

    uni.lo = 0xcccccccc;
    uni.in = 0xbbbb;
    uni.sh = 0xaa;
    // 어 안되네

    cout << hex;
    cout << uni.lo << endl;
    cout << uni.in << endl;
    cout << uni.sh << endl;

    return 0;
}