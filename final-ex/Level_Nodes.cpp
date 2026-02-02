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

pair<Node *, int> level_order_input()
{
    queue<pair<Node *, int>> que;

    int val;
    cin >> val;
    pair<Node*, int> pr;
    
    if (val == -1) pr.first = NULL;
    else {
        Node * rootNode = new Node(val);
        pr = make_pair(rootNode, 0);
    }
    
    if (pr.first) que.push(pr); // node push

    int level =1;

    while (!que.empty())
    {
        Node *frontNode = que.front().first;
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

        
        if (frontNode->left) que.push(make_pair(frontNode->left, level));
        
        if (frontNode->right) que.push(make_pair(frontNode->right, level));

        level++;
    }

    return pr;
}

void level_order_print(pair<Node*, int> pr,int level)
{
   
    if(!pr.first) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*,int>> que;
    que.push(pr);

    bool flag = false;

    while (!que.empty())
    {
        pair<Node * , int> pr2 = que.front();

        que.pop();

        // if(level == pr2.second)
        // {
        //     cout << pr2.first->value << " ";
        //     flag = true;
        // }

        cout << pr2.first->value << " " << pr2.second << endl;
        

        if (pr2.first->left) que.push(make_pair(pr2.first->left, pr2.second));

        if (pr2.first->right) que.push(make_pair(pr2.first->right, pr2.second));
    }

    // if(!flag) cout << "Invalid" << endl;
}


int main()
{
    pair<Node *, int> pr;
    pr = level_order_input();

    int level;
    cin >> level;

    level_order_print(pr, level);
    return 0;
}