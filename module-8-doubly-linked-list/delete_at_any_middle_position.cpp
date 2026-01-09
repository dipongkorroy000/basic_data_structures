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

void delete_at_any_middle_position(Node *head, int idx)
{
    for (int i = 1; i < idx; i++)
    {
        head = head->next;
    }

    Node *deleteNode = head->next;

    head->next = deleteNode->next;

    // deleteNode->next->prev = deleteNode->prev;

    // alternative
    head->next->prev = deleteNode->prev;

    delete deleteNode;
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

    delete_at_any_middle_position(head, 1);

    print_forward(head);

    return 0;
}