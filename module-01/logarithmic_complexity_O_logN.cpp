#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x; //1000
    cin >> x;

    // for (int i = 1; i < x; i *= 2)
    // {
    //     cout << i << endl;
    // }
    // example 2
    for (int i = 1; i < x; i *= 3)
    {
        cout << i << endl;
    }

    return 0;
}

// this problem complexity is 10
// example 2
// this problem complexity is 7

/**
 * 2^K = 1000;  // ans: k =10
 * log2 2^K = log2; 1000
 * K log2 2 = log2 1000; // [log2 2 =1] math formula
 * K = log2 1000;
 * K = log 1000 [constant 2 is remove because it's complexity rule]
 * ans is K= log2 1000;
 * calculate ans K = 9.96 = 10; 
 * 
 * 
 */

 /**
 * 3^K = 1000;  // ans: k =7
 * log3 3^K = log3; 1000
 * K log3 3 = log3 1000; // [log3 3 =1] math formula
 * K = log3 1000;
 * K = log 1000 [constant 3 is remove because it's complexity rule]
 * ans is K= log3 1000;
 * calculate ans K = 6.28 = 7; 
 * 
 * 
 */

// 1
// 2
// 4
// 8
// 16
// 32
// 64
// 128
// 256
// 512

// 1
// 3
// 9
// 27
// 81
// 243
// 729