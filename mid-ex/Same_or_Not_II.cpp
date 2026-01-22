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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;

    tail = newnode;
}

void reverse_link_list(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != j->next; i->next, j->prev)
    {
        swap(i->value, j->value);
    }
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        insert_at_tail(head, tail, val);
    }

    void pop()
    {
        sz--;
        Node *deletenode = tail;
        if (tail == NULL)
            return;

        tail = tail->prev;

        delete deletenode;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        insert_at_tail(head, tail, val);
    }

    void pop()
    {
        sz--;
        Node *deletenode = head;
        if (head == NULL)
            return;

        head = head->next;

        delete deletenode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    MyStack stk;
    MyQueue que;

    int x, y;
    cin >> x >> y;

    if (x != y)
    {
        cout << "NO";
        return 0;
    }

    while (x--)
    {
        int val;
        cin >> val;
        stk.push(val);
    }

    while (y--)
    {
        int val;
        cin >> val;
        que.push(val);
    }

    bool flag = true;
    int size = que.size();

    while (size--)
    {
        if (stk.top() == que.front())
        {
            stk.pop();
            que.pop();
        }
        else
        {
            flag = false;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}