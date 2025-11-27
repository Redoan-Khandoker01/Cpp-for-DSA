#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int a[t];

for (int i = 0; i < t; i++)
{
    cin>>a[i];
}

int count4=0;
int digit =10;
for (int i = 0; i < t; i++)
{
   if(a[i]%digit ==4)
   {
    digit*=10;
    count4++;
   }
   
        
   cout<<a[i]<<endl;
  
}

 cout<<a[count4]<<endl;
return 0;
}