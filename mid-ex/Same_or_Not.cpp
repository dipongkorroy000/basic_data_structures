#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    stack<int> stk;
    queue<int> que;

    if (x != y)
    {
        cout << "NO";
        return 0;
    }


    for (int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        stk.push(val);
    }
    
    for (int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        que.push(val);
    }
    
    bool flag = true;
    for (int i = 0; i < x; i++)
    {
        if(stk.top() == que.front()){
            stk.pop();
            que.pop();
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";


    
    return 0;
}