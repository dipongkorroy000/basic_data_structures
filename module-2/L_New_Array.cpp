#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore();
    
    while (n--)
    {
        vector<string> vec;
        string x;
        while (getline(cin, x))
        {
            vec.push_back(x);
        }
        for(int i = vec.size()-1; i>= 0; i--){
            cout << vec[i] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}