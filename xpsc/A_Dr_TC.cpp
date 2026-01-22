#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0;
        for (char c : str)
            if (c - 48 == 1)
                count++;

        int res = 0;
        for (char c : str)
        {
            if (c - 48 == 1)
            {
                res += count -1;
            }else{
                res += count +1;
            }
        }

        cout << res << endl;
    }

    return 0;
}