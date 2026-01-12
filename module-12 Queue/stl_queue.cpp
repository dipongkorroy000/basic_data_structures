#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    cout << que.front() << endl;

    if (!que.empty())
    {
        que.pop();
    }
    
    // cout << que.size() << endl;
    
    cout << que.front() << endl;
    
    if (!que.empty())
    {
        que.pop();
    }
    cout << que.front() << endl;

    return 0;
}

// 5
// 10 20 30 40 50