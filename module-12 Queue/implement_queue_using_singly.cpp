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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;

        if (head == NULL)
            tail = NULL;
    }

    int front()
    {
        return head->value;
    }

    int back()
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

int main()
{
    myQueue que;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        que.push(val);
    }

    cout << que.front() << endl;

     if(!que.empty()){
        que.pop();
    }

    cout << que.front() << endl;

    cout << que.size() << endl;


    return 0;
}

// 5
// 10 20 30 40 50