#include <iostream>
using namespace std;

// 배열의 문제: 스코프를 넘어서 값을 수정할 수 있음

void print(const int arr[], int size) { // const를 붙여서 값을 바꿀 수 없게 만들어줌
    for (int i = 0; i < size; i++) {
        // arr[i] *= 10; // error
        cout << arr[i] << endl;
    }
}

int main() {
    int num[] = {10,20,30,40};

    print(num, sizeof(num)/sizeof(int));

    cout << endl;

    for (int i = 0; i < sizeof(num)/sizeof(int); i++) {
        cout << num[i] << endl;
    }

    return 0;
}