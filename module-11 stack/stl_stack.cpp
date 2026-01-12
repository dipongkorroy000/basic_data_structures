#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stc;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        stc.push(x);
    }

    while (!stc.empty())
    {
        cout << stc.top() << endl;
        stc.pop();
    }

    return 0;
}