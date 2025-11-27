#include <bits/stdc++.h>
using namespace std;
int main()
{
    string vowel;
    getline(cin, vowel);
    int count =0;
    for (int i = 0; i <= vowel.size()-1; i++)
    {

        if(vowel[i]== 'a' ||vowel[i]=='e' || vowel[i]=='i' ||vowel[i]=='o'||vowel[i]=='u' 
            ||vowel[i]== 'A' ||vowel[i]=='E' || vowel[i]=='I' ||vowel[i]=='O'||vowel[i]=='U' )
        {
                count++;
        }
        
    }
cout<<count;
    return 0;
}