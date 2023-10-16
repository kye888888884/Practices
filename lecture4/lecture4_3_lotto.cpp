#include <iostream>
#include <ctime>
using namespace std;

void lotto() {
    int lotto[6];
    // 시드 설정
    srand(time(0));

    while(true) {
        for (int i = 0; i < 6; i++) {
            lotto[i] = rand() % 45 + 1;
        }

        // 중복이면 다시 뽑기
        if (lotto[0] != lotto[1] && lotto[0] != lotto[2] && lotto[0] != lotto[3] && lotto[0] != lotto[4] && lotto[0] != lotto[5] &&
            lotto[1] != lotto[2] && lotto[1] != lotto[3] && lotto[1] != lotto[4] && lotto[1] != lotto[5] &&
            lotto[2] != lotto[3] && lotto[2] != lotto[4] && lotto[2] != lotto[5] &&
            lotto[3] != lotto[4] && lotto[3] != lotto[5] &&
            lotto[4] != lotto[5]) {
            break;
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << lotto[i] << " ";
    }
    
    cout << endl;
}

int main() {
    lotto();

    return 0;
}