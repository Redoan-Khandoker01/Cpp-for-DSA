#include<bits/stdc++.h>
using namespace std;
    class Student
    {   public:

        char name [100];
        int rol;
        char section;
        double gpa;

    };

int main()
{
    Student redo,tanvir;

    cin.getline(redo.name,100);
    cin>> redo.rol>>redo.section>>redo.gpa;
    cin.ignore();
    cin.getline(tanvir.name,100);
    cin>> tanvir.rol>>tanvir.section>>tanvir.gpa;

    cout<<redo.name<<" "<<redo.rol<<" "<<redo.section<<" "<<redo.gpa<<endl;
    cout<<tanvir.name<<" "<<tanvir.rol<<" "<<tanvir.section<<" "<<tanvir.gpa;

return 0;
}