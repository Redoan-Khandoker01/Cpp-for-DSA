#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;

    //constructor
    Student(string name,int roll)
    {
        this->name=name;
        this->roll = roll;
    }
    void hello()
    {
        cout<<"hello from "<<name<<endl;
    }
};
int main()
{

    Student redoan("redoan Khandoker",10);
    redoan.hello();

    Student rabbi ("rabbi khan",20);
    rabbi.hello();




return 0;
}