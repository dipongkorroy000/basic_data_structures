#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // O(1)
    cin >> n; // O(1)
    vector<int>vec; // O(1)

    while (n--) // O(n)
    {
        int x;
        cin >> x;
        if(x == 0) vec.push_back(0);
        else if(x > 0) vec.push_back(1);
        else vec.push_back(2);
    }

    int length = vec.size(); // O(1)
    int start = 0; // O(1)
    while (start< length) // O(n)
    {
       cout << vec[start] <<  " ";
       start++;
    }
    
    return 0; // O(1)
}