#include<bits/stdc++.h>
using namespace std;
int main()
{ 
string s= "Hello world"; // এই ভাবে  string constructor লিখা যায় নিচে লিখা হলো।

//1
// string s("hello wordl");
//2
// string s("String Constructor",8);

// //3
string t(s,4);
// //4
// string s(5,'A');

cout<<t;


return 0;
}