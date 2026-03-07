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

void sorted_linked_list(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }
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

    sorted_linked_list(head);

    print_linked_list(head);

    return 0;
}

// 10 30 50 40 20 100 60 80 20 -1