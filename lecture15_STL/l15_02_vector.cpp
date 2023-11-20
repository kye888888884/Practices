#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;

    for (size_t i = 0; i < 8; i++)
    {
        vec1.push_back(i);
    }

    // for (size_t i = 0; i < vec1.size(); i++)
    // {
    //     cout << vec1[i] << ":" << &vec1[i] << endl;
    // }

    while (!vec1.empty())
    {
        cout << vec1.back() << endl;
        vec1.pop_back();
    }

    cout << vec1.capacity() << endl; // 꽉차면 2배씩 늘어남
    // 어떻게 새로 할당했는데 인접해있지??
    
    return 0;
}