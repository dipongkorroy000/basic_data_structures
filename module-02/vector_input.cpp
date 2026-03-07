#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";

    // undeclred vector size
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // size increase and add value
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}

// input
// 5
// 10 20 30 40 50
// output
// 10 20 30 40 50