#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> p1(new int);

    *p1 = 10;
    cout << *p1 << endl;
    cout << "count: " << p1.use_count() << endl;

    shared_ptr<int> p2 = p1;
    cout << *p2 << endl;
    cout << "count: " << p2.use_count() << endl;
    return 0;
}