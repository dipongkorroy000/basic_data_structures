#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // O(n)
    {
        for (int j = 0; j < n; j++) // O(n)
        {
            cout << "Hello world";
        }
    }

    // complexity = O(n) * O(n) =3; => O(n^2) 3 * 3 =9;

    for (int i = 0; i < n; i++) // O(n)
    {
        cout << "Hello world";
    }

    // complexity = O(n) =3;


    // total complexity => O(n) + O(n) => O(2n) => o(n) => max 9 is answer

    return 0;
}
