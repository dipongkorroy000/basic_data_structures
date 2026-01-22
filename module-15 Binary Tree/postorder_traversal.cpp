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

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left); // left

    postorder(root->right); // right

    cout << root->value << " "; // root
};

int main()
{
    // Binary Tree------
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    postorder(root);

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

// out-> 40 20 50 60 30 10 