#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //36

    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " " << n / i << " ";
    //     }
    // }
    // alternative
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }

    return 0;
}

// 1 36 2 18 3 12 4 9 6 6