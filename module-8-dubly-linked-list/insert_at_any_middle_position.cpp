#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
};

void insert_at_any_middle_position(Node *head, int idx, int value)
{
    Node *newnode = new Node(value);

    for (int i = 1; i < idx; i++)
    {
        head = head->next;
    }

    newnode->next = head->next;
    newnode->prev = head;

    head->next->prev = newnode;
    head->next = newnode;

    // cout << head->value << endl;
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_middle_position(head, 2, 100);
    insert_at_any_middle_position(head, 1, 500);

    print_forward(head);

    return 0;
}