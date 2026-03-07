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

void delete_at_Tail(Node *head, Node *&tail, int position)
{
    for (int i = 1; i < position; i++)
    {
        head = head->next;
    }

    Node *deleteNode = head->next;

    head->next = head->next->next;

    // cout << deleteNode->value << endl; // which element delete -> print this element

    delete deleteNode;
    tail = head;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }

    delete_at_Tail(head, tail, 4); // got tail last index before index

    print_linked_list(head);

    return 0;
}

// 10 20 30 40 50 -1