#include <bits/stdc++.h>
using namespace std;

void function1(int *&p)
{
    // *p = 100;
    // cout << "In function1: " << *p << endl;
    // int y = 100;
    p = NULL;
    cout << "In function1: " << &p << endl;
}

int main()
{
    int x = 10;
    int *p = &x;

    function1(p);

    // cout << "In Main: " << *p << endl;
    // cout << x << endl;

    // cout << *p << endl;

    cout << "In Main: " << p << endl;

    return 0;
}