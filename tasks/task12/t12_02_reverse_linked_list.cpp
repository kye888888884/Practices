#include <iostream>
using namespace std;

template <typename T>
struct list
{
    T value;
    list *next;
};

list<int> *append(int value)
{
    list<int> *node = new list<int>;
    node->value = value;
    node->next = NULL;
    return node;
}

list<int> *append(list<int> *tail, int value)
{
    list<int> *node = new list<int>;
    node->value = value;
    node->next = NULL;
    tail->next = node;
    return node;
}

list<int> *reverse(list<int> *head)
{
    if (head->next == NULL)
        return head;
    list<int> *loop;
    list<int> *prev = NULL;
    list<int> *next = head->next;
    list<int> *nnext = head->next->next;
    for (loop = head; loop != NULL;)
    {
        loop->next = prev;
        prev = loop;
        next->next = loop;
        loop = next;
        if (nnext == NULL)
            break;
        next = nnext;
        nnext = nnext->next;
    }
    return loop;
}

int main()
{
    list<int> *head;
    list<int> *loop;
    list<int> *tail;
    list<int> *r_head;

    tail = head = append(10);
    tail = append(tail, 20);
    tail = append(tail, 30);
    tail = append(tail, 40);

    for (loop = head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }

    r_head = reverse(head);
    cout << "Reversed" << endl;

    for (loop = r_head; loop != NULL; loop = loop->next)
    {
        cout << loop->value << endl;
    }
}