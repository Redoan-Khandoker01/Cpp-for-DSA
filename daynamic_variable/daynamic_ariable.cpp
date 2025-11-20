#include <bits/stdc++.h>
using namespace std;


///  static memory 
int*p;
int fun()
    {   
        int x =10;
        p=&x;
        cout<<"fun="<<*p<<endl;    


        return x;
    }


int main()
{   
    int output = fun();
    cout<<"main="<<*p<<endl; 
    return 0;
}