#include <iostream>
using namespace std;

template <typename T, typename U>
T xfind(T first, T last, U c)
{
    while (first != last && first != c)
        first++;
    return first;
}

template <typename T>
struct Node
{
    T data;
    Node *next;
    Node(T a, Node *n) : data(a), next(n) {}
};

template <typename T>
class slist_iterator
{
    Node<T> *current;

public:
    slist_iterator(Node<T> *p = 0) : current(p) {}
    bool operator!=(const slist_iterator &p) { return current != p.current; }
    template <typename U>
    bool operator!=(U data) { return current->data != data; }
    slist_iterator &operator++(int)
    {
        current = current->next;
        return *this;
    }
    T &operator*() { return current->data; }
};

template <typename T>
class slist
{
    Node<T> *head;

public:
    slist() : head(0) {}
    void push_front(const T &a) { head = new Node<T>(a, head); }

    typedef slist_iterator<T> iterator;

    slist_iterator<T> begin() { return slist_iterator<T>(head); }
    slist_iterator<T> end() { return slist_iterator<T>(0); }
};

int main()
{
    slist<int> s;

    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_front(40);

    // slist<int>::iterator p;

    for (auto p = s.begin(); p != s.end(); p++)
    {
        cout << *p << endl;
    }
    // 순회는 잘 되지만, 아직 xfind와 호환되지 않음
    // 자료형, 연산자 모두 안맞음.

    slist<int>::iterator q = xfind(s.begin(), s.end(), 30);
    cout << *q << endl;
}