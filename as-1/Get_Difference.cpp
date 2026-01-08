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

void inserted_linked_list(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
};

int minAndMaxValueDifferent(Node *head)
{
    int minValue = head->value;
    int maxValue = head->value;

    while (head != NULL)
    {
        if (minValue > head->value)
            minValue = (head->value);

        if (maxValue < head->value)
            maxValue = (head->value);

        head = head->next;
    }

    return maxValue - minValue;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1) break;

        inserted_linked_list(head, tail, x);
    }

    int value = minAndMaxValueDifferent(head);

    cout << value << endl;

    return 0;
}