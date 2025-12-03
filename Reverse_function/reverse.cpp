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


// // sort(a,a+n);                   // ছোট থেকে বড়।
// sort(a,a+n, greater<int>());      // বাড় থেকে ছোট।
reverse(a,a+n);                      // উল্ট করে প্রিন্ট করা।
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}
 ‍

return 0;
}