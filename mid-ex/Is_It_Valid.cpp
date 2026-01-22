#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        stack<int> stk;
        stack<int> stk2;

        for (int c : str)
        {
            if (!stk.empty() && ((c - 48 == 0 && stk.top() == 1) || (c - 48 == 1 && stk.top() == 0)))
            {
                stk.pop();
            }
            else
            {
                stk.push(c - 48);
            }
        }

        if(stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}