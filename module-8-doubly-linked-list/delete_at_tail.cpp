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

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;

    // if (tail->prev == NULL)
    // {
    //     delete deleteNode;

    //     tail = NULL;
    //     head = NULL;
    //     return;
    // }

    tail = tail->prev;

    delete deleteNode;

    // alternative
    if(tail == NULL){
        head = NULL;
        return;
    }

    tail->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_tail(head, tail);
    delete_at_tail(head, tail);
    // delete_at_tail(head, tail);

    print_forward(head);

    return 0;
}