#include <bits/stdc++.h>
using namespace std;

int return_type(int x, int y, int z, int q)
{
    int mx = x;
    if (x > mx)
    {
        mx = x;
    }
    if (y > mx)
    {
        mx = y;
    }

    if (z > mx)
    {
        mx = z;
    }
    if (q > mx)
    {
        mx = q;
    }

    return mx;
}

int main()
{
    int a, b, c, d;
    cin >> a, cin >> b, cin >> c, cin >> d;

    int max = return_type(a, b, c, d);

    cout << max;

    return 0;
}