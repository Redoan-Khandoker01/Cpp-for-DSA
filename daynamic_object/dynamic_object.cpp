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
    Student *karim= new Student(50,5,3.45); //Dynamic object or (heep memory)
    
     cout<<karim->roll<<" " <<karim->cls<<" " <<fixed<<setprecision(2)<<karim->gpa<<endl;
    return 0;

}