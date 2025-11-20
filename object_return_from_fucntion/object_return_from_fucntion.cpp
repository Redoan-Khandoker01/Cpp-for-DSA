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

Student fun() // funcion 
{
    Student rahim(50,8,5.00);
    return rahim; // return fuction to main funcion 
}


int main()
{   
    
  
    Student rahim =fun();

    cout<<rahim.roll<<" " <<rahim.cls<<" " <<fixed<<setprecision(2)<<rahim.gpa<<endl;
   
    return 0;

}