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

        int array[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];

        sort(array, array + n);

        int minVal = array[0];
        int maxVal = array[n - 1];

        if (minVal % 2 == maxVal % 2)
            cout << 0 << endl;
        else
        {
            int i = 0, count = 0;
            while (array[i] % 2 != maxVal % 2)
            {
                i++;
                count++;
            }

            int j = n - 1, count2 = 0;
            while (array[j] % 2 != minVal % 2)
            {
                j--;
                count2++;
            }

            cout << min(count, count2) << endl;
        }
    }

    return 0;
}