#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    vector<long long int> vec2;
    long long int sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        sum += x;
        vec.push_back(x);
        vec2.push_back(sum);
    }

    int size = vec.size() - 1;

    for (int i = size; i >= 0; i--)
    {
        cout << vec2[i] << " ";
    }

    return 0;
}