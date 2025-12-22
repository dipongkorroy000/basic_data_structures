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

    int sum =0;

    int length = vec.size();

    for(int i =0; i< length; i++){
        int digit = vec[i] +1;
        for(int j =0; j< length; j++)
            if(digit == vec[j]){
                sum++;
                break;
            }
    
    }

    cout << sum << endl;
    
    return 0;
}