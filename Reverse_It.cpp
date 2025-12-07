#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student arr[105]; // 
    char rev[105];    // 

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id;
    }

    // store
    for (int i = 0; i < N; i++)
    {
        rev[i] = arr[N - 1 - i].section;
    }

    // assign 
    for (int i = 0; i < N; i++)
    {
        arr[i].section = rev[i];
    }

    
    for (int i = 0; i < N; i++)
    {
        cout << arr[i].name << " "
             << arr[i].cls << " "
             << arr[i].section << " "
             << arr[i].id << "\n";
              << arr[i].id << "\n";
              << arr[i].id << "\n";
               << arr[i].id << "\n";
                << arr[i].id << "\n";
                << arr[i].id << "\n";
    }


    return 0;
}
