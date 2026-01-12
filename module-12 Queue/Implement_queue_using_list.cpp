#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> listone;

    void push(int val)
    {
        listone.push_back(val);
    }

    void pop()
    {
        listone.pop_front();
    }

    int front()
    {
        return listone.front();
    }

    int back()
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
    myQueue que;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        que.push(val);
    }

    while (!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }

    return 0;
}

// 5
// 10 20 30 40 50