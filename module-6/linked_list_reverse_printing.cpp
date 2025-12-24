#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
};

void reverse_print_linked_list(Node *head)
{
    if (head == NULL) return;

    reverse_print_linked_list(head->next);

    cout << head->value << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if(value == -1) break;
        insert_at_tail(head, tail, value);
    }

    reverse_print_linked_list(head);

    return 0;
}

// 10 20 30 40 50 -1