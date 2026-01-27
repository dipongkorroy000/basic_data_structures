#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array[i] = x;
    }

    int silentDays[n] = {0};

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && i < n - 1)
        {
            int a = array[i - 1];
            int val = array[i];
            int b = array[i + 1];

            if (a > val && b > val)
            {
                silentDays[i]++;
            }
        }
        else
        {
            continue;
        }
    }

    int prifixSum[n];

    prifixSum[0] = silentDays[0];
    for (int i = 1; i < n; i++)
    {
        prifixSum[i] = prifixSum[i - 1] + silentDays[i];
    }

    // for(int i : prifixSum){
    //     cout << i << " ";
    // }

    // cout << endl;

    int t;
    cin >> t;
    while (t--)
    {
        int L, R;
        cin >> L >> R;

        int silentDay = prifixSum[R - 1] - (L > 1 ? prifixSum[L - 2] : 0);

        cout << silentDay << endl;
    }

    return 0;
}