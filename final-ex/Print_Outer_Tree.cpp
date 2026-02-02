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

Node *level_order_input()
{
    queue<Node *> que;

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    if (root)
        que.push(root); // node push

    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop(); // front node remove

        int left, right;
        cin >> left >> right;

        Node *leftNode, *rightNode;

        if (left == -1)
            leftNode = NULL;
        else
            leftNode = new Node(left);

        if (right == -1)
            rightNode = NULL;
        else
            rightNode = new Node(right);

        frontNode->left = leftNode;
        frontNode->right = rightNode;

        if (frontNode->left)
            que.push(frontNode->left);

        if (frontNode->right)
            que.push(frontNode->right);
    }

    return root;
}

void outer_nodes_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        outer_nodes_left(root->left); // left

    else
        outer_nodes_left(root->right);

    cout
        << root->value << " "; // root
};

void outer_nodes_right(Node *root)
{
    if (root == NULL)
        return;

    cout << root->value << " ";

    if (root->right)
        outer_nodes_right(root->right);

    else
        outer_nodes_right(root->left);
};

int main()
{
    Node *root = level_order_input();
    if (root && root->left)
        outer_nodes_left(root->left);

    if (root)
        cout << root->value << " ";

    if (root && root->right)
        outer_nodes_right(root->right);

    return 0;
}