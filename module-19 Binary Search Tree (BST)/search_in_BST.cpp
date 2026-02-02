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

Node *input_tree() {
    queue<Node *> que;
    Node *root;

    int val;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    if(root) que.push(root);

    while (!que.empty())
    {
        Node *frNode = que.front();
        que.pop();

        Node *leftNode, *rightNode;

        int left, right;
        cin >> left >> right;

        if(left == -1) leftNode = NULL;
        else leftNode = new Node(left);

        if(right == -1) rightNode = NULL;
        else rightNode = new Node(right);

        frNode->left = leftNode;
        frNode->right = rightNode;

        if(frNode->left) que.push(frNode->left);
        if(frNode->right) que.push(frNode->right);
    }
    
    return root;
};

bool search_value(Node *root, int val){
    if(!root) return false;

    if(root->value == val) return true;

    if(root->value > val) return search_value(root->left, val);
    else return search_value(root->right, val);
};

int main()
{
    Node *root = input_tree();

    int val;
    cin >> val;

    bool isTrue = search_value(root, val);

    if(isTrue) cout << "Found\n";
    else cout << "Not Found\n";
    return 0;
}

/**
 *                ------- Binary Search Tree ------- complexity -> O(hight) or O(log(N))
 *
 * condition -> 1. left value is small & right value is large
 * 
 *                    left         17(root)       right
 *                               /    \
 *                             7       21
 *                           /  \     /  \
 *                         -1    12  20   26
 *           
 * 
 *          searchingVal = 9
 * 
 * in -> 17 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
 * val -> 9
 * 
 */

/**
 *                   ------- Binary Search Tree -------
 *
 *                    left         10(root)       right
 *                               /    \
 *                             5       15
 *                           /  \     /  \
 *                          2    6   12  16
 *                           \ 
 *                            3 
 * 
 *          searchingVal = 12
 * 
 *  in -> 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
 *  val -> 12
 * 
 */



