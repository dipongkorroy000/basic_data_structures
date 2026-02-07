#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student left, Student right) // fn name must "operator" and double ()()
    {                                            
        if(left.marks > right.marks) return true;
        else if(left.marks < right.marks) return false;
        else return left.roll > right.roll; // reverse condition provide
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj(name, roll, marks);

        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}

// in ->
// 3
// sakib 25 92
// rakib 12 85
// akib 7 96

// out ->
// rakib 12 85
// sakib 25 92
// akib 7 96