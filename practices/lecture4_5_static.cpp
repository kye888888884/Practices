#include <iostream>
using namespace std;

// static: 정적 변수
int main() {
    for (int i = 0; i < 10; i++) {
        static int temp = 0; // static 변수는 한 번만 초기화됨
        cout << temp << endl;
        temp++;
    }

    return 0;
}