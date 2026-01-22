#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> listone;
    string val;

    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        listone.push_back(val);
    }

    int n;
    cin >> n;

    auto current = listone.begin();

    while (n--)
    {
        string str;
        cin >> str;

        if (str == "visit")
        {
            string sp;
            cin >> sp;

            bool find = false;
            for (auto it = listone.begin(); it != listone.end(); ++it)
            {
                if (*it == sp)
                {
                    current = it;
                    cout << *it << endl;
                    find = true;
                    break;
                }
            }

            if (!find)
                cout << "Not Available" << endl;
        }

        // next ------
        else if (str == "next")
        {
            auto temp = current;
            ++temp;

            if (temp != listone.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        
        // prev -----
        else if (str == "prev")
        {
            if (current != listone.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }
    return 0;
}
