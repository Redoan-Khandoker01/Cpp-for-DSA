#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    string result[n];
        
    for (int i = 0; i < n; i++)
    {
        char firstChar = s[i][0];
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' ||
            firstChar == 'o' || firstChar == 'u' ||
            firstChar == 'A' || firstChar == 'E' || firstChar == 'I' ||
            firstChar == 'O' || firstChar == 'U')
        {
           result[i]=s[i];
        }

    }

     for (int i = 0; i < n; i++)
     {
        cout<<result[i]<<endl;
     }
    
    return 0;
}