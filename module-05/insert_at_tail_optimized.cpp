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

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_tail(head, tail, 10);
    insert_at_tail(head, tail, 20);
    insert_at_tail(head, tail, 30);

    print_linked_list(head);

    return 0;
}