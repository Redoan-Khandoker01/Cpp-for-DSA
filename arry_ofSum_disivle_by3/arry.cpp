#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
   cin>>a[i];
}
int f=0;
for (int i = 0; i < n; i++)
{
   f =f+a[i];
}
if(f%3==0)
{
    cout<<"Yes, it is divisible  by 3";
}
else{
    cout<<"NO, it's not a divisible 3";
}
return 0;
}