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
    // cout << endl << head->next->value << endl;
    // cout << endl << tail->value << endl;
};

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
};

void delete_value(Node *&head, Node *&tail, int position)
{
    Node *tempHead = head;
    
    if(!tempHead) return;
    if (position == 0)
    {
        head = tempHead->next;
        delete tempHead;
        return;
    }

    for (int i = 0; i < position - 1; i++)
    {
        if (tempHead == NULL) break;
        tempHead = tempHead->next;
    }

    if (!tempHead || !tempHead->next) return;

    Node *deleteNode = tempHead->next;

    tempHead->next = deleteNode->next;

    if(deleteNode == tail) tail = tempHead;

    delete deleteNode;
};

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;
    while (n--)
    {
        int x, value;
        cin >> x >> value;

        if (x == 0)
        {
            insert_at_head(head, tail, value);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, value);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            delete_value(head, tail, value);
            print_linked_list(head);
        }
    }

    return 0;
}