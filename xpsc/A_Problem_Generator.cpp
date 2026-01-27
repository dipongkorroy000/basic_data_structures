#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        string str;
        cin >> x >> y >> str;

        int array[7] = {0};

        for (char c : str)
        {
            array[c - 'A']++;
        }

        int count = 0;
        for (int val : array)
        {
            if (val < y)
            {
                count += y-val;
            }
        }

        cout << count << endl;
    }

    return 0;
}