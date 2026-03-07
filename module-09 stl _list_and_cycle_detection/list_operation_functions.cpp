#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> listone = {10, 20, 40, 30, 50, 10, 60, 70};
    // listone.sort(); // descending

    // listone.remove(10); // delete 10 in this linked list

    // sort(listone.begin(), listone.end()); not working -> it's for array or vector

    // listone.sort(); // ascending order
    // listone.sort(greater<int>()); // descending order

    // listone.unique(); // if sort - then duplicate value delete

    listone.reverse(); // ulta according makeing - 70 60 10 50 30 40 20 10

    for (int value : listone)
    {
        cout << value << endl;
    }

    return 0;
}