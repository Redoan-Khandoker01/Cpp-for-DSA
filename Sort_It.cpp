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

    sort(a,a+n); ///// ascending  Order sort.
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    sort(a,a+n,greater<int>());//////////////Descending order sort 
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    


return 0;
}