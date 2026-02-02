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
    vector<int> vec;

    if (!root)
    {
        return;
    }

    queue<Node *> que;
    que.push(root);


    while (!que.empty())
    {
        Node *frontNode = que.front();
        que.pop();

        // cout << frontNode->value << " ";
        // if(!frontNode->left && !frontNode->right) cout << frontNode->value << " ";
        if(!frontNode->left && !frontNode->right) vec.push_back(frontNode->value);

        if (frontNode->left) que.push(frontNode->left);

        if (frontNode->right) que.push(frontNode->right);
    }

    sort(vec.begin(), vec.end());

    for(int i = vec.size()-1; i >= 0; i--){
        cout << vec[i] << " ";
    }
}


int main()
{
    Node * root = level_order_input();

    level_order_print(root);
    return 0;
}