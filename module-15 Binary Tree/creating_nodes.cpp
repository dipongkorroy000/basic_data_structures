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

    return 0;
}

//
/**
 * --------- Data Structures-------
 *      1. Linear data Structure        2. Non-linear data Structure
 *      1.1 -> Array,                   2.1 -> Graphs
 *      1.2 -> Stack,                   2.2 -> Trees(1. Binary Tree, 2. N-ary Tree)
 *      1.3 -> Queue
 *      1.4 -> Linked-list
 */

/**
 *                        ------- Binary Tree -------
 *
 *                    left         10(root)       right
 *                                /   \
 *                              20(a)  30(b)
 *                             /       /  \
 *                           40(c)   50(d)  60(e)
 */

 /**
  *                          ----------- Order ----------
  *                             |                     |
  *                       1.Depth-wise             2. Level-wise
  *               --------------------------            |
  *               |            |           |        level order
  *          (Pre_order    In_order     Post_order)   
  */