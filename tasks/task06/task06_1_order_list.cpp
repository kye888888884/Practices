#include <iostream>
using namespace std;

int main()
{
    int bugger = 0, fries = 0, coke = 0, select;

    cout << "Select a menu (1-4)" << endl;
    do
    {
        cout << "1) Bugger, 2) Fries, 3) Coke, 4) Finish" << endl;
        cin >> select;
        switch (select)
        {
        case 1:
            bugger++;
            cout << "You've ordered a Bugger." << endl;
            break;
        case 2:
            fries++;
            cout << "You've ordered a Fries." << endl;
            break;
        case 3:
            coke++;
            cout << "You've ordered a Coke." << endl;
            break;
        case 4:
            cout << "Your order has been received!" << endl;
            break;
        default:
            cout << "Wrong order." << endl;
        }
    } while (select != 4);

    cout << endl;
    cout << "Your orders" << endl;
    if (bugger > 0)
        cout << "1) Bugger * " << bugger << endl;
    if (fries > 0)
        cout << "2) Fries * " << fries << endl;
    if (coke > 0)
        cout << "3) Coke * " << coke << endl;

    return 0;
}