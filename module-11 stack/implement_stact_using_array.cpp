#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> vct;

    void push(int val)
    {
        vct.push_back(val);
    }
    void pop()
    {
        vct.pop_back();
    }
    int top()
    {
        return vct.back();
    }
    int size()
    {
        return vct.size();
    }
    bool empty()
    {
        return vct.empty();
    }
};

int main()
{
    myStack stk;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        stk.push(x);
    }

    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}

// 5
// 1 2 3 4 5