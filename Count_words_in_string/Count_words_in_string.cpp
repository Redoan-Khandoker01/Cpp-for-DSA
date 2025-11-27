#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);

int n= s.length();
int space=0;

for (int i = 0; i<n; i++)
{
   
    if(s[i]==' ')
    {
        space++;
    }
}

//now we know ;
int word=space+1;
cout<< "there are "<<word<<" words";



return 0;
}