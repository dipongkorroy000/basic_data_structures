#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st; // sort + remove duplicate value

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.insert(val);
    }
    
    // for(auto it = st.begin(); it != st.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // if(st.count(40)) cout << "Found" << endl;
    // else cout << "Not Found" << endl;

    return 0;
}

// in ->
// 10
// 2 3 4 2 3 5 1 6 8 2

// out -> 1 2 3 4 5 6 8