#include <iostream>
using namespace std;

int main()
{
    char a[5][5] = {
        {1, 0, 0, 0, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == 0) cout << " ";
            else cout << "@";
        }
        cout << endl;
    }

    return 0;
}