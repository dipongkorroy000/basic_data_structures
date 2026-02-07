#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int val;
    cin >> val;
    vec.push_back(val);

    int cur_idx = vec.size() - 1;
    
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2; // parent index

        if (vec[par_idx] > vec[cur_idx])
            swap(vec[par_idx], vec[cur_idx]);
        else
            break;

        cur_idx = par_idx;
    }

    for(int x : vec)
        cout << x << " ";

    return 0;
}

/**
 *                ------- Using Completed Binary Tree -> Using array -------
 *
 * condition -> 1. completed binary input tree           time complexity -> O(NlogN)
 * 
 *                    left         2(root)       right
 *                               /    \
 *                             4        7
 *                           /  \      /  \
 *                         13    9    15   8
 *                        /  \   / \
 *                      20   14 10  (3)
 *          
 *              insertVal = 18
 * 
 * in ->
 * 10
 * 2 4 7 13 9 15 8 20 14 10
 * 3
 * 
 * out binary tree ->
 *                    left         2(root)       right
 *                               /    \
 *                             3        7
 *                           /  \      /  \
 *                         13    4    15   8
 *                        /  \   / \
 *                      20   14 10  9
 * out ->
 * 2 3 7 13 4 15 8 20 14 10 9 
 */