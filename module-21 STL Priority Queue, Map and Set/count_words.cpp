#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    string s;
    getline(cin , s);
    stringstream ss(s);

    string word;

    while (ss >> word)
    {
        // cout << word << endl;
        mp[word]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}

// in -> I love Football He Loves Football We love Football they love cricket

/**
 * out ->
 * Football 3
 * He 1
 * I 1
 * Loves 1
 * We 1
 * cricket 1
 * love 3
 * they 1
 */

