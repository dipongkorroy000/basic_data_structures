#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    list<int> evenList;
    list<int> oddList;

    for (int val : lst)
    {
      if(val%2 == 0){
        evenList.push_back(val);
      }else{
        oddList.push_back(val);
      }
    }

    for (int val : evenList)
    {
        cout << val << " ";
    }
    for (int val : oddList)
    {
        cout << val << " ";
    }
    
    
    
    return 0;
}