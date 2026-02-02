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

Node *input_tree(){
    queue<Node *> que;
    Node *root;

    int val;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    if(root) que.push(root);

    while (!que.empty())
    {
        Node *fr = que.front();
        que.pop();

        Node *leftNode, *rightNode;

        int left, right;
        cin >> left >> right;
        if(left == -1) leftNode = NULL;
        else leftNode = new Node(left);
        if(right == -1) rightNode = NULL;
        else rightNode = new Node(right);

        fr->left = leftNode;
        fr->right = rightNode;

        if(fr->left) que.push(fr->left);
        if(fr->right) que.push(fr->right);
    }

    return root;
}

void insert(Node *root, int val){
    if(!root) root = new Node(val);

    if(root->value > val){
        if(!root->left) root->left = new Node(val);
        else insert(root->left, val);
    }else {
        if(!root->right) root->right = new Node(val);
        else insert(root->right, val);
    }
}

void print_tree(Node *root){
    if(!root) return;

    queue<Node *> que;
    que.push(root);

    while(!que.empty()){
        Node *fr = que.front();
        que.pop();

        cout << fr->value << " ";

        if(fr->left) que.push(fr->left);
        if(fr->right) que.push(fr->right);
    }
};

int main()
{
    Node *root = input_tree();

    int val;
    cin >> val;

    insert(root, val); // complexity - O(h)

    print_tree(root);

    return 0;
}

/**
 *                 ------- Binary Search Tree -------
 *
 *                    left         10(root)       right
 *                               /     \
 *                              6       23
 *                               \     /   \
 *                                9   19    29
 *                               /   /  \    \
 *                              7   12  (21)  35
 * 
 *          searchingVal = 12
 * 
 *  in -> 10 6 23 -1 9 19 29 7 -1 12 -1 -1 35 -1 -1 -1 -1 -1 -1
 *  val -> 21
 *  out -> 10 6 23 9 19 29 7 12 21 35
 */