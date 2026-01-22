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

void insert_at_tail(Node *&head,Node *&tail, int val){
    Node *newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val){
    Node *newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    head->prev= newnode;
    newnode->next = head;

    head = newnode;
};

void insert_at_any_middle_position(Node *head, int idx, int value)
{
    Node *newnode = new Node(value);

    for (int i = 1; i < idx; i++)
    {
        head = head->next;
    }

    newnode->next = head->next;
    newnode->prev = head;

    head->next->prev = newnode;
    head->next = newnode;

    // cout << head->value << " " << idx << " " << value << endl;
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

void reverse_print_linked_list(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
};



int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int index = 0;

    int t;
    cin >> t;

    while (t--)
    {
        int idx,val;
        cin >> idx >> val;

        if(index < idx) {
            cout << "Invalid" << endl;
            continue;
        }

        index++;

        if(idx == 0){
            insert_at_head(head, tail, val);
        }
        else if(idx == index-1){
            insert_at_tail(head,tail,val);
        }else{
            insert_at_any_middle_position(head, idx, val);
        }

        cout << "L -> ";
        print_linked_list(head);
        cout << "R -> ";
        reverse_print_linked_list(tail);
        
    }
    
    return 0;
}