#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r,int c, double d) /// constructor name
    {   
        roll =r;
        cls = c;
        gpa = d;
    }
};

int main()
{   
    Student rahim(50,8,5.00);
    Student karim(40,6,4.00);

    cout<<rahim.roll<<" " <<rahim.cls<<" " <<fixed<<setprecision(2)<<rahim.gpa<<endl;
     cout<<karim.roll<<" " <<karim.cls<<" " <<fixed<<setprecision(2)<<karim.gpa<<endl;
    return 0;

}