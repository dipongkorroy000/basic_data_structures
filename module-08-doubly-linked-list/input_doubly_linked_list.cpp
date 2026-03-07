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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;

    tail = newnode;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while(true){
        cin >> value;
        if(value == -1) break;
        
        insert_at_tail(head, tail, value);
    }

    print_forward(head);

    return 0;
}

// 10 20 30 40 50 -1