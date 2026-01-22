#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        // if (sum % 3 == 0)
        // {
        //     int val = sum / 3;
        //     int exVal = c - val;

        //     int a_need_val = val - a;
        //     int b_need_val = abs(val - b);

        //     if (val != (c - (a_need_val + b_need_val)))
        //         cout << "NO" << endl;
        //     else if (a_need_val + b_need_val != exVal)
        //         cout << "NO" << endl;
        //     else
        //         cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;

        // alternative
        if (sum % 3 == 0 && b <= sum / 3)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}