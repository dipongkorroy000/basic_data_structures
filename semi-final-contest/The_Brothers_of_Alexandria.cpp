#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array[i] = x;
    }

    sort(array, array + n);

    cout << array[k-1];

    return 0;
}