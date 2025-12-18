#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector copy ----
    // vector<int> v2;
    // v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    //     cout << v2[i] << " ";
    // alternative sort cut ---------
    // for (int x : v2)
    //     cout << x << " ";

    // vector<int> v = {1, 2, 3, 4, 5};
    // v.pop_back(); // remove last element

    // vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(position, value or element)
    // v.insert(v.begin() + 2, 100);
    // for (int x : v)
    //     cout << x << " ";

    // multiple value insert ---------
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin() + 2, {100, 200, 300});
    // for (int x : v)
    //     cout << x << " ";

    // a vector values insert --------
    // vector<int> v = {1, 2, 3, 4, 5};
    // vector<int> v2 = {500, 600, 700};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // for (int x : v)
    //     cout << x << " ";

    // vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 2, v.begin()+4); // 2-5 delete value
    // for (int x : v)
    //     cout << x << " ";

    // ------- replace element-------
    // vector<int> v = {1, 2, 3, 4, 5, 2, 8, 3, 2, 1, 7, 2};
    // replace(v.begin(), v.end(), 2, 100); // শুরু থেকে শেষ পর্যন্ত যতগুলো ২ আছে সকল ২ এর পরিবর্তে ১০০ বসাব
    // replace(v.begin(), v.end()-1, 2, 100); // শুরু থেকে শেষের আগ পর্যন্ত যতগুলো ২ আছে সকল ২ এর পরিবর্তে ১০০ বসাব
    // for (int x : v)
    //     cout << x << " ";

    // --------
    // vector<int> v = {1, 2, 3, 4, 5, 2, 8, 3, 2, 1, 7, 2};

    // vector<int>::iterator it = find(v.begin(), v.end(), 9);
    // alternative -------
    // auto it = find(v.begin(), v.end(), 9);

    // if (it == v.end())
    // {
    //     cout << "Not found";
    // }
    // else
    //     cout << *it << " " << "found";

    // ------- access element-------
    // vector<int> v = {1, 2, 3, 4, 5, 2, 8, 3, 2, 1, 7, 2};
    // cout << v[0] << endl;
    // cout << v.back() << endl;
    // cout << v.front() << endl;
    // cout << v.size() << endl;
    // cout << v[v.size()-2] << endl;

    // ------
    // vector<int> v = {1, 2, 3, 4, 5, 2, 8, 3, 2, 1, 7, 2};

    // for (auto i = v.begin(); i < v.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin()+2, v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << v[v.size() - 1];
    cout << v.back();

    return 0;
}