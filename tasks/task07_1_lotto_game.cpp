#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int n1, n2, n3, n4, n5, n6;

int is_correct(int g)
{
    return g == n1 || g == n2 || g == n3 || g == n4 || g == n5 || g == n6;
}

int main()
{
    int g1, g2, g3, g4, g5, g6;
    srand((unsigned int)time(NULL));

    cout << "Guess lottery numbers: " << endl;
    cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;

    do
    {
        n1 = rand() % 45 + 1;
        n2 = rand() % 45 + 1;
        n3 = rand() % 45 + 1;
        n4 = rand() % 45 + 1;
        n5 = rand() % 45 + 1;
        n6 = rand() % 45 + 1;
    } while (n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5 || n1 == n6 ||
             n2 == n3 || n2 == n4 || n2 == n5 || n2 == n6 ||
             n3 == n4 || n3 == n5 || n3 == n6 ||
             n4 == n5 || n4 == n6 ||
             n5 == n6);

    cout << endl;
    cout << "Number: " << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << endl;

    int correct = 0;
    if (is_correct(g1))
        correct++;
    if (is_correct(g2))
        correct++;
    if (is_correct(g3))
        correct++;
    if (is_correct(g4))
        correct++;
    if (is_correct(g5))
        correct++;
    if (is_correct(g6))
        correct++;
    string result;
    switch (correct)
    {
    case 3:
        result = "You are in 5th place!";
        break;
    case 4:
        result = "You are in 4th place!";
        break;
    case 5:
        result = "You are in 3rd place!!";
        break;
    case 6:
        result = "You are in 1st place!!!";
        break;
    default:
        result = "No prize...";
        break;
    }
    cout << "You match " << correct << " numbers! " << result << endl;

    return 0;
}