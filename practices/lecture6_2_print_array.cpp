#include <iostream>
using namespace std;

void print(int arr[]) {
    // array decaying
    cout << "sizeof arr: " << sizeof(arr) << endl; // 주소값의 크기

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        cout << arr[i] << endl;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int num[] = {10,20,30,40};

    cout << "sizeof num: " << sizeof(num) << endl;

    print(num);
    cout << endl;
    printArray(num, sizeof(num)/sizeof(int));

    return 0;
}