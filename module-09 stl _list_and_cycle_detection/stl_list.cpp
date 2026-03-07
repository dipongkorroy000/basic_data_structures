#include <bits/stdc++.h>
using namespace std;

int main()
{
    // concept -1
    // list<int> linkedList(10, 5); // 10 node create and all node value is 5

    // cout << linkedList.size() << endl;
    // cout << *linkedList.begin() << endl;

    // for(auto it = linkedList.begin(); it != linkedList.end(); it++){
    //     cout << *it << endl;
    // }

    // concept -2
    // list<int> linkedList = {1, 2, 3, 4, 5};
    // list<int> linkedList2(linkedList); // copy- time complexity- O(N)

    // int array[] = {10, 20, 30};
    // list<int> listArray(array, array + 3); // copy array- time complexity- O(N)

    // vector<int> vec = {10, 20, 30};
    // list<int> listVector(vec.begin(),vec.end()); // copy vector- time complexity- O(N)

    // for (int val : listVector)
    // {
    //     cout << val << endl;
    // }

    // concept -3 - capacity
    // list<int> linkedList;
    // cout << linkedList.max_size() << endl; // time complexity- O(1)

    list<int> linkedList = {10, 20, 30, 40, 50};

    // linkedList.clear(); // time complexity- O(N)

    // if(linkedList.empty()){
    //     cout << "Empty";
    // }

    linkedList.resize(10, 100); // size update and add 100

    for (int val : linkedList)
    {
        cout << val << endl;
    }

    return 0;
}