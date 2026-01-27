#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int students, chocolates;
    cin >> students >> chocolates;

    cout << chocolates/students << " " << chocolates%students;

    return 0;
}