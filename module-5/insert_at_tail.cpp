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

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
};

int main()
{
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->next = b;

    Node *head = NULL;

    insert_at_tail(head, 40);

    print_linked_list(head);

    return 0;
}