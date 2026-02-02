#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> pr;
    // pr = make_pair(2, 3);
    // cout << pr.first << " " << pr.second << endl;

    // pair<string, string> pr2;
    // pr2 ={"hello", "world"};
    // cout << pr2.first << " " << pr2.second << endl;

    // pair<int, string> pr3;
    // pr3 ={5, "world"};
    // cout << pr3.first << " " << pr3.second << endl;

    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    return 0;
}