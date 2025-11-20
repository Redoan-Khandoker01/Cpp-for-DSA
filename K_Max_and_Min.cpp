#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3];
for (int i = 0; i <3; i++)
{
    cin>>a[i];
}

int mini=INT_MAX;
int mx =INT_MIN;
for (int i = 0; i <3; i++)
{
    mini = min(a[i],mini);
    mx = max(a[i],mx);
}
cout<<mini<<" "<<mx;




return 0;
}