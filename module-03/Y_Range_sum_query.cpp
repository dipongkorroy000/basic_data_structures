#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> vec;
    vector<long long int> vec2;

    long long int sum = 0;
    while (n--)
    {
        int y;
        cin >> y;
        sum += y;
        vec.push_back(y);
        vec2.push_back(sum);
    }

    while (x--)
    {
        int a, b;
        cin >> a >> b;

        long long int firstTotal = vec2[a - 1] - vec[a - 1];

        long long int lastTotal = vec2[b - 1];

        cout << lastTotal - firstTotal << endl;
    }

    return 0;
}

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     vector<int> vec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }

//     vector<long long int> vec2(n);
//     vec2[0] = vec[0];
//     for (int i = 1; i < n; i++)
//     {
//         vec2[i] = vec2[i - 1] + vec[i];
//     }

//     while (x--) 
//     {
//         int a, b;
//         cin >> a >> b; 

//         long long int sum;

//         if(a == 1){
//             sum = vec2[b-1];
//         }
//         else{
//             sum = vec2[b-1] - vec2[a-2];
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }