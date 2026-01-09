#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> listone = {10, 20, 30, 40, 20, 50};

    // list<int> listtwo;

    // listtwo = listone;
    // alternative
    // listtwo.assign(listone.begin(), listone.end());

    // listone.push_back(100);
    // listone.push_front(200);

    // listone.pop_back();
    // listone.pop_front();

    // cout << *listone.begin(); // print first value

    // access any value using next pointer function -next(starting pointer,index)
    // cout << *next(listone.begin(), 2); // time complexity - O(N)

    // listone.insert(next(listone.begin(), 2), 300); // insert any position (index, value)

    // list<int> listthree = {100, 200, 300};
    // listone.insert(next(listone.begin(), 2), listthree.begin(), listthree.end()); // insert a linkedList

    // listone.erase(next(listone.begin(), 2)); // delete a value using index, index 2 delete

    // listone.erase(next(listone.begin(), 2), next(listone.begin(), 4)); // delete multiple value, - 2 and 3 index value delete

    // replace(listone.begin(), listone.end(), 20, 200); // replace 20 -> 200

    // for (int val : listone)
    // {
    //     cout << val << endl;
    // }

    auto it = find(listone.begin(), listone.end(), 20);
    if (it == listone.end())
        cout << "NOT FOUND";
    else
        cout << "FOUND";

    return 0;
}