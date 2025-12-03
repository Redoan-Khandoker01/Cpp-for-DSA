#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    bool found = false;

    getline(cin, name);

    stringstream ss(name);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
