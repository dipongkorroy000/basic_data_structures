#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> v;
    // for(int i =0; i<n; i++){
    //     string x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for(string s: v){
    //     cout << s << endl;
    // }
 
    int n;
    cin >> n;
    vector<string> v;
    for(int i =0; i<n; i++){
        string x;
        cin.ignore();
        getline(cin , x);
        v.push_back(x);
    }

    for(string s: v){
        cout << s << endl;
    }

    return 0;
}

// input 
// 5
// Rakib
// Sakib
// Akib
// Rifat
// Sifat

// input 
// 5
// Rakib Hasan
// Sakib Ali
// Akib Khan
// Rifat Abdul
// Sifat Hamza