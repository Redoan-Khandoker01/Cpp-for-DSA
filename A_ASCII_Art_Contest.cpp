#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int mxx =max({a,b,c});

    int mini = min({a,b,c});

    // mid
    
    int mid;

    if ((a >= b && a <= c) || (a <= b && a >= c))
    {
        mid = a;
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c))
    {
        mid = b;
    }
    else
    {
        mid = c;
    }
    ////////
    int biog = mxx - mini;

    if(biog <=9)
    {
        cout<<"final "<<mid<<endl;
    }
    else{
        cout<<"check again"<<endl;
    }
}

// Gemini, ChatGPT, and Claude