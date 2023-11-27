#include <iostream>
#include <cstring>
using namespace std;

template <typename T, typename U>
void Sort(U x, U n, T cmp)
{
    for (auto i = x; i < n; i++)
        for (auto j = i; j < n; j++)
            if (cmp(*i, *j))
            {
                auto temp = *i;
                *i = *j;
                *j = temp;
            }
}

template <typename T>
class VECTOR_iterator
{
    T *current;

public:
    VECTOR_iterator(T *p) : current(p) {}
    VECTOR_iterator &operator++()
    {
        ++current;
        return *this;
    }
    VECTOR_iterator &operator++(int i)
    {
        current++;
        return *this;
    }
    T &operator*() { return *current; }
    bool operator!=(const VECTOR_iterator &v) { return current != v.current; }
    bool operator<(const VECTOR_iterator &v) { return current < v.current; }
};

template <typename T>
class VECTOR
{
    T *mPtr;
    int mSize;
    int mCapacity;
    int mIndex; // 이건 왜 필요?

public:
    VECTOR(int s = 0) : mSize(s), mCapacity(s), mIndex(0)
    {
        mPtr = new T[mCapacity];
    }
    int size() { return mSize; }
    int capacity() { return mCapacity; }

    void resize(int s)
    {
        if (s <= mCapacity)
            mSize = s;
        else
        {
            mCapacity = s * 2;
            mSize = s;

            T *tmp = new T[mCapacity];
            memcpy(tmp, mPtr, sizeof(T) * mSize);
            delete[] mPtr;
            mPtr = tmp;
        }
    }

    void push_back(const T &value)
    {
        if (mIndex == mSize)
            resize(mSize + 1);
        mPtr[mIndex++] = value;
    }

    T &operator[](int index)
    {
        return mPtr[index];
    }

    typedef VECTOR_iterator<T> iterator;
    iterator begin() { return iterator(mPtr); }
    iterator end() { return iterator(mPtr + mSize); }

    void _sort()
    {
        Sort(begin(), end(), [](int a, int b)
             { return a > b; });
    }
};

int main()
{
    VECTOR<int> v;

    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);
    v.push_back(50);

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    for (auto i : v) // 이걸 위해 정의해야 할 연산자: *, !=, ++, ++(int)
        cout << i << endl;

    v._sort(); // 추가로 정의해야 할 연산자: <

    cout << endl;

    for (auto i : v)
        cout << i << endl;
}