#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    vector<int>::iterator it;

    for (size_t i = 0; i < 8; i++)
    {
        vec1.push_back(i);
    }

    for (it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << ":" << &it << endl;
    }

    // for (size_t i = 0; i < vec1.size(); i++)
    // {
    //     cout << vec1[i] << ":" << &vec1[i] << endl;
    // }
    
    return 0;
}