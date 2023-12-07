#include <iostream>
using namespace std;

class my_list
{
private:
    struct node
    {
        int data;
        node *next = nullptr;
    };
    node *head = nullptr;
    node *tail = nullptr;
    node *current_node = nullptr;
    int length = 0;
    int current = 0;

public:
    my_list &append(int value)
    {
        node *n = new node;
        n->data = value;
        n->next = nullptr;

        if (head == nullptr)
        {
            head = n;
            tail = n;
            current_node = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        length++;
        return *this;
    }
    my_list &next()
    {
        current++;
        current_node = current_node->next;
        return *this;
    }
    int get()
    {
        return current_node->data;
    }
    void rewind()
    {
        current = 0;
        current_node = head;
    }
    void info() { cout << "length: " << length << ", current: " << current << endl; }
};

int main()
{
    my_list l;

    l.append(10).append(20).append(30).append(40);

    l.next().next();
    cout << l.get() << endl; // print out 30

    l.info(); // print out 'length: 4, current: 2 (or 3 depending on your start index)'

    l.rewind();
    cout << l.get() << endl; // print out 10
    return 0;
}