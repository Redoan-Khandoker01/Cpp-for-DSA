#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int rol;
    char section;
    double GPA;

};
int main()
{
    Student a;
    a.rol =10;
    a.GPA =3.5;
    char temp[100]="sakib"; 
    strcpy(a.name,temp);
    a.section = 'A';

    cout<<a.name<<" "<<a.GPA<<" "<<a.section<<" "<<a.rol;


 
return 0;
}