#include <iostream>
using namespace std;

struct idcard
{
    int id;
    string name;
    float score;
};

void func(struct idcard id)
{
    cout << id.id << endl;
    cout << id.name << endl;
    cout << id.score << endl;
}

int main()
{
    // const idcard id = {202020, "kyh", 2.8};
    idcard id2 = {202020, "kyh", 2.8};

    func(id2);

    return 0;
}