#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // O(1)
    cin >> n; // O(1)

    vector<int> vec; // O(1)
    while (n--) // O(n)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
  
    int length = vec.size(); // O(1)
    while (length--) // O(n)
        cout << vec[length] << " ";
    
    
    return 0; // O(1)
}