#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["rakib"] = 2; // logN

    mp["sakib"] = 3;

    mp["sajib"] = 5;

    mp["rajib"] = 0;

    // for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    // {
    //     cout << (*it).first << " " << it->second << endl; // logN
    // }

    cout << mp["rajib"] << endl;

    if(mp.count("rajib")) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    return 0;
}

// out ->
// rakib 2
// sajib 5
// sakib 3