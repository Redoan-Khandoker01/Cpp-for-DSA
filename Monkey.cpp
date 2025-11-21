#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;

    while(getline(cin,s))
    {   
        string tem;
        for(char c:s)
        {
            if(c !=' ')
            {
                tem += c;
            }
        }
           



        sort(tem.begin(),tem.end());
       
        cout<<tem<<"\n";

    }

    
    


return 0;
}