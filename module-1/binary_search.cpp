#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int array[n];
    for(int i =0; i< n; i++){
        cin >> array[i];
    }
   

    for(int i =0; i<q; i++){
        int x;
        cin >> x;

        int flag =0;

        for(int j =0; j<n; j++){
            if(array[j] == x){
                flag =1;
            }
        }
        if(flag == 1){
            cout << "found" << endl;
        }else {
            cout << "not found" << endl;
        }
    }

    return 0;
}

// 5 3
// 1 5 4 3 2
// 5
// 3
// 6

// found
// found
// not found