#include <iostream>
using namespace std;

int main() {
    int num[] = {1,2,3,4};
    int copy[4];

    // copy = num; // error

    for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
        copy[i] = num[i];
    }

    cout << copy[2] << endl;

    return 0;
}