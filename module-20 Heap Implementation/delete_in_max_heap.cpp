#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &vec, int val)
{
    vec.push_back(val);

    int cur_idx = vec.size() - 1;

    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2; // parent index

        if (vec[par_idx] < vec[cur_idx])
            swap(vec[par_idx], vec[cur_idx]);
        else
            break;

        cur_idx = par_idx;
    }
}

void print_heap(vector<int> vec)
{
    for (int x : vec)
        cout << x << " ";
    cout << endl;
}

void delete_heap(vector<int> &vec) // complexity O(logN)
{
    cout << "Deleted Value -> " << vec.front() << endl;
    vec[0] = vec.back();
    vec.pop_back();

    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;     // left child index
        int right_idx = cur_idx * 2 + 2;    // right child index

        int left_val = INT_MIN, right_val =  INT_MIN;

        if(left_idx < vec.size()) left_val = vec[left_idx];
        if(right_idx < vec.size()) right_val = vec[right_idx];

        if(left_val >= right_val && left_val > vec[cur_idx]){
            swap(vec[left_idx], vec[cur_idx]);
            cur_idx = left_idx;
        }
        else if(right_val > left_val && right_val > vec[cur_idx]){
            swap(vec[right_idx], vec[cur_idx]);
            cur_idx = right_idx;
        }
        else break;
    }
}

int main()
{
    vector<int> vec;

    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        insert_heap(vec, val);
    }

    print_heap(vec);

    delete_heap(vec);

    print_heap(vec);

    return 0;
}

/**
 *                ------- Using Completed Binary Tree -> Using array -------
 *
 * condition -> 1. completed binary input tree
 *
 *                    left         42(root)       right
 *                               /    \
 *                             21       17
 *                           /  \      /  \
 *                         9     13   11   6
 *                        /  \   / \
 *                       2    3 7   5
 *
 * in ->
 * 11
 * 42 21 17 9 13 11 6 2 3 7 5
 *
 *
 * out binary tree ->
 *                    left         21(root)       right
 *                               /    \
 *                             13       17
 *                           /  \      /  \
 *                          9     7   11   6
 *                        /  \   /
 *                       2    3 5
 * out ->
 * 42 21 17 9 13 11 6 2 3 7 5 
 * Deleted -> 42
 * 21 13 17 9 7 11 6 2 3 5 
 */