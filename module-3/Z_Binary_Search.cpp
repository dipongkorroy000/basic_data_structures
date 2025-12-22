#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> vec;
    while (n--)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    while (q--)
    {
        int value;
        cin >> value;

        int flag = 0; //  [1, 2, 3, 4, 5, 6, 7, 8] // left index = 0; and right index = 7

        int left = 0;
        int right = vec.size() - 1;

        while (left <= right)
        {
            int mid = (left + right) / 2; 

            if (vec[mid] == value)
            {
                flag = 1;
                break;
            }

            else if (vec[mid] > value)
                right = mid - 1;

            else
                left = mid + 1;
        }

        if (flag == 1)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}

// 8 3
// 1, 2, 3, 4, 5, 6, 7, 8
// 3
// 2
// 9