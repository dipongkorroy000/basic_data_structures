#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> vec;
    while (n--)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int size = vec.size()-1;

    sort(vec.begin(), vec.end());

    bool isTrue = false;
    for(int i = 0; i< size; i++){
        if(vec[i] == vec[i+1]){
            isTrue = true;
            break;
        }
    }

    if(isTrue) cout << "YES";
    else cout << "NO";
    
    return 0;
}