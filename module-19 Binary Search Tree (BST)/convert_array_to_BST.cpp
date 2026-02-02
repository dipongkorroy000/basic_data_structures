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

Node *convert(int array[], int n, int left, int right){
    if(left > right) return NULL;

    int mid = (left + right)/2;

    Node *root = new Node(array[mid]);

    Node *leftRoot = convert(array, n, left, mid-1);
    Node *rightRoot = convert(array, n, mid+1, right);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
};

void print_tree(Node *root){
    if(!root) return;

    queue<Node *> que;
    que.push(root);

    while (!que.empty())
    {
        Node *fr = que.front();
        que.pop();

        cout << fr->value << " ";

        if(fr->left) que.push(fr->left);
        if(fr->right) que.push(fr->right);
    }
    
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i =0; i<n; i++) cin >> array[i];
    
    Node *root = convert(array, n, 0, n-1);
    
    print_tree(root);
    
    return 0;
}

/**
 *                ------- Binary Search Tree ------- complexity -> O(hight) or O(log(N))
 *
 * 
 * 
 *                    left         5(root)       right
 *                               /    \
 *                              2      7
 *                            /  \    /  \
 *                           1    3  6    8
 *                                 \       \
 *                                  4       9
 *          searchingVal = 9
 * 
 * in -> | 9
 *       | 1 2 3 4 5 6 7 8 9
 * 
 * out -> 5 2 7 1 3 6 8 4 9
 */