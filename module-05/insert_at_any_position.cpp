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

void insert_at_any_position(Node *head, int index, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 2, 200);

    print_linked_list(head);

    return 0;
}