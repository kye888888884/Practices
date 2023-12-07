#include <iostream>
using namespace std;

class Heap
{
private:
    int *data = new int(0);
    int last = 0;
    void moveup(int index)
    {
        if (index <= 0)
            return;
        int parent = (index - 1) / 2;
        if (data[parent] < data[index])
        {
            swap(parent, index);
            moveup(parent);
        }
    }
    void movedown(int index)
    {
        // cout << "movedown " << data[index] << "(" << index << ")" << endl;
        if (index * 2 + 1 > last) // left가 없으면 right도 없음
            return;
        int left = index * 2 + 1;
        int max = left;
        if (index * 2 + 2 <= last) // right가 있으면
        {
            int right = index * 2 + 2;
            if (data[left] < data[right])
                max = right;
        }

        if (data[max] > data[index])
        {
            swap(max, index);
            movedown(max);
        }
    }
    void swap(int index1, int index2)
    {
        // cout << "swapped " << data[index1] << "(" << index1 << ") and " << data[index2] << "(" << index2 << ")" << endl;
        int temp = data[index1];
        data[index1] = data[index2];
        data[index2] = temp;
    }

public:
    void insert(int value)
    {
        data[last] = value;
        cout << "inserted " << value << endl;
        moveup(last);
        last++;
    }

    int service()
    {
        if (last == 0)
        {
            cout << "heap is empty" << endl;
            return -1;
        }
        int root = data[0];
        data[0] = data[last - 1];
        data[last - 1] = 0;
        // cout << data[0] << " is root now" << endl;
        last--;
        movedown(0);
        return root;
    }

    void print()
    {
        for (int i = 0; i < last; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main()
{
    Heap heap;
    for (int i = 1; i <= 7; i++)
    { // 1부터 7까지 삽입
        heap.insert(i);
        heap.print();
    }
    cout << endl;
    for (int i = 0; i <= 8; i++)
    {
        cout << "service: " << heap.service() << endl;
        heap.print();
    }

    return 0;
}