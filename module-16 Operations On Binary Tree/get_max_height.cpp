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

Node *level_order_binary_tree_input()
{
    queue<Node *> que;

    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    if (root) que.push(root);

    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop();

        int left, right;
        cin >> left >> right;

        Node *leftNode, *rightNode;

        if (left == -1) leftNode = NULL;
        else leftNode = new Node(left);

        if (right == -1) rightNode = NULL;
        else rightNode = new Node(right);

        frontNode->left = leftNode;
        frontNode->right = rightNode;

        if (leftNode) que.push(leftNode);

        if (rightNode) que.push(rightNode);
    }

    return root;
}


int max_height(Node *root){
    if(!root) return 0;

    if(!root->left && !root->right) return 0;

    int left = max_height(root->left);
    int right = max_height(root->right);

    return max(left, right) + 1;
}

int main()
{
    Node *root = level_order_binary_tree_input();
    int height = max_height(root);
    cout << height << endl;

    return 0;
}

/**
 *           ------- Binary Tree --
 * 
 *       left         10(root)       right  (height = 2)    (depth = 0)
 *                   /   \
 *                 20(a)  30(b)             (height = 1)    (depth = 1)
 *                /       /  \
 *              40(c)   50(d)  60(e)        (height = 0)    (depth = 2)
 */

// in -> 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
// out -> 2