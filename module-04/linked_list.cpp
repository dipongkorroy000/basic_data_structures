#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     * Array
     * - Fixed Size
     * - Sequential Memory Allocation
     */

    // int array[5] = {1, 2, 3, 4, 5};
    // cout << &array[2] << " " << &array[3];
    // cout << (uintptr_t)&array[2] << " " << (uintptr_t)&array[3];

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << (uintptr_t)&vec[2] << " " << (uintptr_t)&vec[3] << " " << (uintptr_t)&vec[4];

    



    return 0;
}