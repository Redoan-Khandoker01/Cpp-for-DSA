#include<bits/stdc++.h>
using namespace std;
int main()
{
string a;
getline(cin,a);

 

for (int i = 0; i<a.size(); i++)
{
    if(a[i]>='a' && a[i] <='z')
    {
        a[i] = a[i]-('a'-'A','z'-'Z');
    }
    ignore ='\0';
    cout<<a[i];
}



return 0;
}