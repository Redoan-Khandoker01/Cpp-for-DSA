#include<bits/stdc++.h>
using namespace std;
    class Student 
    {
        public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int english_makrs;
    };
    bool cmp(Student a ,Student b)
    {
        int totalA=a.math_marks +a.english_makrs;
        int totalB = b.math_marks+b.english_makrs;
        if(totalA !=totalB)
        {
            return totalA>totalB;
        }
       else {
        return a.id<b.id;
       }
       
    }
int main()
{
int n;
cin>>n;
Student a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].english_makrs;
}


sort(a,a+n,cmp);
/////////////
for (int  i = 0; i < n; i++)
{
     cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].english_makrs<<endl;
}


return 0;
}