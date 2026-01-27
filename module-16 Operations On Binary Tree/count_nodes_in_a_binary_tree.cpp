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

void level_order_print_count(Node *root)
{
    if(!root){
        cout << "No Tree";
        return;
    }

    queue<Node *> que;
    que.push(root);

    int count = 0;

    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop();

        // cout << frontNode->value << " ";
        count++;

        if(frontNode->left) que.push(frontNode->left);

        if(frontNode->right) que.push(frontNode->right);
    }

    cout << count << endl;
}

void count_nodes(Node *root){
    queue<Node *> que;
    que.push(root);


}

int main()
{
    Node *root = level_order_binary_tree_input();
    level_order_print_count(root);

    return 0;
}

// in -> 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
// out-> 6
