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
        int value = head->value;
        cout << value << " ";
        head = head->next;
    }
    cout << endl;
};

void duplicate_value_remove(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *temp = i;

        Node *j= i->next;

        while (j != NULL)
        {
            if(i->value == j->value){
                Node * nextNode = j->next;

                temp->next = nextNode;

                delete j;

                j = nextNode;

            }else{
                temp = j;

                j = j->next;
            }
        }
        
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int size =0;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        size++;
        insert_at_tail(head, tail, x);
    }

    duplicate_value_remove(head);

    print_linked_list(head);
    return 0;
}