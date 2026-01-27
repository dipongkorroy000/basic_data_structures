#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

// binary tree input-> every binary tree this input function using
Node *level_order_input()
{
    queue<Node *> que;

    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    if (root) que.push(root); // node push

    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop(); // front node remove

        int left, right;
        cin >> left >> right;

        Node *leftNode, *rightNode;

        if (left == -1) leftNode = NULL;
        else leftNode = new Node(left);

        if (right == -1) rightNode = NULL;
        else rightNode = new Node(right);

        frontNode->left = leftNode;
        frontNode->right = rightNode;

        if (frontNode->left) que.push(frontNode->left);

        if (frontNode->right) que.push(frontNode->right);
    }

    return root;
}

void level_order_print(Node *root)
{
    if (!root)
    {
        cout << "No Tree";
        return;
    }

    queue<Node *> que;
    que.push(root);

    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop();

        cout << frontNode->value << " ";

        if (frontNode->left) que.push(frontNode->left);

        if (frontNode->right) que.push(frontNode->right);
    }
}

int main()
{

    Node *root = level_order_input();

    level_order_print(root);

    return 0;
}

/**
 *                        ------- Binary Tree -------
 *
 *                    left         10(root)       right
 *                                /   \
 *                              20(a)  30(b)
 *                             /       /  \
 *                           40(c)   50(d)  60(e)
 */

// in -> 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
// out-> 10 20 30 40 50 60

// in -> -1
// out -> No Tree