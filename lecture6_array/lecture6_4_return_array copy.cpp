#include <iostream>
using namespace std;

int[] print(const int arr[], int size) {
    int ret[4] = {-1, -2, -3, -4};
    return ret;
}

int main() {
    int num[] = {10,20,30,40};

    print(num, sizeof(num)/sizeof(int));

    return 0;
}