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

void level_order_print(Node *root)
{
    queue<Node *> que;
    que.push(root);

    while (!que.empty())
    {
        // 1. ber kore ana
        // 2. oi node ke niye kaj
        // 3. children

        Node *fr = que.front();
        que.pop();

        cout << fr->value << " ";

        if (fr->left != NULL)
            que.push(fr->left);

        if (fr->right != NULL)
            que.push(fr->right);
    }
}

int main()
{
    // Binary Tree level order print------
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

// out-> 10 20 30 40 50 60