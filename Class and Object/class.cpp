#include<bits/stdc++.h>
using namespace std;
   class  Student
   {    public:
        char name[100];
        int roll;
        double gpa;

   };
int main()
{
 Student redoan,sabbir;

    cin.getline(redoan.name,100);
    cin>>redoan.roll>>redoan.gpa;
    cin.ignore(2);
    cin.getline(sabbir.name,100);
    cin>>sabbir.roll>>sabbir.gpa;

    cout<<redoan.name<<endl<<redoan.roll<<" "<<redoan.gpa<<endl<<endl;
    cout<<sabbir.name<<endl<<sabbir.roll<<" "<<sabbir.gpa<<endl;
    
    return 0;
}