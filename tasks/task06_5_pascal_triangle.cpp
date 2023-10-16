#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input height: ";
    cin >> n;

    int len = (n - 1) / 2;
    for (int t = 0; t < len; t++)
        cout << "\t";
    cout << 1 << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int t = 0; t < len - (i + 1) / 2; t++)
            cout << "\t";
        for (int r = 0; r <= i; r++)
        {
            if (i % 2 == 1)
                cout << "    ";
            long f_i = 1;
            for (int j = 1; j <= i; j++)
            {
                f_i *= j;
            }
            long f_r = 1;
            for (int j = 1; j <= r; j++)
            {
                f_r *= j;
            }
            long f_ir = 1;
            for (int j = 1; j <= i - r; j++)
            {
                f_ir *= j;
            }
            int C = f_i / (f_r * f_ir);
            cout << C << "\t";
        }
        cout << endl;
    }
    return 0;
}