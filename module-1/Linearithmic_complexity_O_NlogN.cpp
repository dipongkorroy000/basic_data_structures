#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // complexity n
    {
        for (int j = 1; j <= n; j *= 2) // complexity logn
        {
            cout << "Hello" << endl;
        }
    }

    // total complexity nlogn

    return 0;
}