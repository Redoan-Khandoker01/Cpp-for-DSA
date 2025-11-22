#include <bits/stdc++.h>
using namespace std;

class Student
{
        public:
    int id, marks;
    string name;
    char section;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student s[3];

        // input 
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }

    
        int top = 0;
        for (int i = 1; i < 3; i++)
        {
            if (s[i].marks > s[top].marks || (s[i].marks == s[top].marks && s[i].id < s[top].id))
            {
                top = i;
            }
        }

        // output
        cout << s[top].id << " " << s[top].name << " "
             << s[top].section << " " << s[top].marks << endl;
    }

    return 0;
}
