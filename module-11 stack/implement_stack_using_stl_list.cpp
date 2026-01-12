#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> listone;

    void push(int val)
    {
        listone.push_back(val);
    }
    void pop()
    {
        listone.pop_back();
    }
    int top()
    {
        return listone.back();
    }
    int size()
    {
        return listone.size();
    }
    bool empty()
    {
        return listone.empty();
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