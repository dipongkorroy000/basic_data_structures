#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ------- heap = priority_queue ------

    // max priority queue ------
    // priority_queue<int> pq;

    // pq.push(10);
    // pq.push(30);
    // pq.push(5);
    // cout << pq.top() << endl; // 30

    // pq.push(100);
    // cout << pq.top() << endl; // 100

    // pq.pop(); // 100
    // cout << pq.top() << endl;

    // cout << pq.size() << endl;

    // cout << pq.empty() << endl;

    // min priority queue ----
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(30);
    pq.push(5);
    cout << pq.top() << endl; // 5

    pq.push(2);
    cout << pq.top() << endl; // 2

    pq.pop(); // 2
    cout << pq.top() << endl;

    return 0;
}