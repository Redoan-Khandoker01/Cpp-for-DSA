#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    double gpa;
    int rol;
    int clas;

    Student(double g, int r, int c)
    {   gpa = g;
        rol = r;
        clas = c;
        
    }
};

int main()
{
Student rahim(2.33, 40, 5);

cout<<"gpa = "<<rahim.gpa<<endl<<rahim.rol<<endl<<rahim.clas;


    return 0;
}