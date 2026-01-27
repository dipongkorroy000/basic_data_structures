#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i<= n; i++)
    cout << i;

    if(n == 1) return 0;
    
    cout << endl;
    
    for(int i = 2, j = n-1; i < n; i++, j--){
        cout << i;

        for(int k = n-2; k > 0; k--)
        cout << " ";

        cout << j;
        cout << endl;
    }


    for(int i = n; i > 0; i--)
    cout << i;

    return 0;
}