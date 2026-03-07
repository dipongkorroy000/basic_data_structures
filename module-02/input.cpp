#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[4] = {12, 13, 14, 15};

    // vector<int> v(a, a + 4);

    // cout << v[3];



       // --------
    vector<int> v = {1, 2, 3, 4, 5, 2, 8, 3, 2, 1, 7, 2};

    vector<int>::iterator it = find(v.begin(), v.end(), 9);
    
    if (it == v.end())
    {
        cout << "Not found";
    }
    else
        cout << " " << "found";

    return 0;
}