#include <iostream>
using namespace std;

#define NONE 0xFFFF

struct Node
{
    char name;
    int depth = 0;
    int index = 0;
    Node *left = NULL;
    Node *right = NULL;
};

Node tree[10]; // = (Node *)malloc(10 * sizeof(Node));
int tree_size = 0;

void root(char name)
{
    if (tree[0].name != '\0')
    {
        cout << "'" << tree[0].name << "' is already the root." << endl;
        return;
    }
    Node n = {name};
    tree[0] = n;
    tree_size++;
    cout << "'" << name << "' is at the root." << endl;
}

void set_left(char name, int parent)
{
    if (tree[parent].left != NULL)
    {
        cout << "'" << tree[parent].name << "' has already the left child '" << tree[parent].left->name << "'" << endl;
        return;
    }
    Node n = {name, tree[parent].depth + 1, tree_size};
    tree[tree_size] = n;
    tree[parent].left = &tree[tree_size++];
    cout << "'" << name << "' is appended at the left of '" << tree[parent].name << "'" << endl;
}

void set_right(char name, int parent)
{
    if (tree[parent].right != NULL)
    {
        cout << "'" << tree[parent].name << "' has already the right child '" << tree[parent].right->name << "'" << endl;
        return;
    }
    Node n = {name, tree[parent].depth + 1, tree_size};
    tree[tree_size] = n;
    tree[parent].right = &tree[tree_size++];
    cout << "'" << name << "' is appended at the right of '" << tree[parent].name << "'" << endl;
}

void print_tree()
{
    cout << endl;
    int max_d = 0;
    for (int i = 0; i < tree_size; i++)
        if (tree[i].depth > max_d)
            max_d = tree[i].depth;
    max_d++;
    int len = (1 << max_d) - 1;
    int arr[max_d][len];

    for (int y = 0; y < max_d; y++)
        for (int x = 0; x < len; x++)
            arr[y][x] = NONE;

    arr[0][len / 2] = 0;

    for (int y = 0; y < max_d - 1; y++)
    {
        for (int x = 0; x < len; x++)
        {
            int idx = abs(arr[y][x]);
            if (idx != NONE)
            {
                if (tree[idx].left != NULL)
                    arr[y + 1][x - (1 << (max_d - y - 2))] = -(tree[idx].left->index);
                if (tree[idx].right != NULL)
                    arr[y + 1][x + (1 << (max_d - y - 2))] = tree[idx].right->index;
            }
        }
    }

    long long empty_lines = 0b0;
    int empty_num = 0;
    for (int x = 0; x < len; x++)
    {
        bool empty = true;
        for (int y = 0; y < max_d; y++)
        {
            if (abs(arr[y][x]) != NONE)
            {
                empty = false;
                break;
            }
        }
        if (empty)
        {
            empty_lines |= (1 << x);
            empty_num++;
        }
    }

    int new_map[max_d][len - empty_num];
    int cur_x = 0;
    for (int x = 0; x < len; x++)
    {
        if (empty_lines & (1 << x))
            continue;
        for (int y = 0; y < max_d; y++)
            new_map[y][cur_x] = arr[y][x];
        cur_x++;
    }

    int new_len = len - empty_num;

    for (int y = 0; y < max_d; y++)
    {
        for (int x = 0; x < new_len; x++)
        {
            if (y == 0)
                break;
            int idx = new_map[y][x];
            if (idx != NONE)
                cout << " " << ((idx < 0) ? "/" : "\\") << "  ";
            else
                cout << "    ";
        }
        cout << endl;
        for (int x = 0; x < new_len; x++)
        {
            int idx = abs(new_map[y][x]);
            if (idx != NONE)
                cout << tree[idx].name << "(" << tree[idx].index << ")";
            else
                cout << "    ";
        }
        cout << endl;
    }
}

int main()
{
    Node n = {'\0'};
    tree[0] = n;
    root('A');
    set_left('B', 0);
    set_left('C', 0);
    set_right('C', 0);
    set_left('D', 1);
    set_right('E', 3);
    set_right('F', 1);
    set_left('G', 5);
    set_right('H', 2);
    print_tree();

    return 0;
}