#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S, X;
        cin >> S >> X;

        int n = S.size();
        int m = X.size();

        for (int i = 0; i < n;)
        {
            bool match = true;

            // check if X matches starting at position i
            if (i + m <= n)
            {
                for (int j = 0; j < m; j++)
                {
                    if (S[i + j] != X[j])
                    {
                        match = false;
                        break;
                    }
                }
            }
            else
            {
                match = false;
            }

            if (match)
            {
                cout << "#"; // replace with #
                i += m;      // skip X length
            }
            else
            {
                cout << S[i];
                i++;
            }
        }
        cout << "\n";  cout << "\n";
          cout << "\n";
            cout << "\n";
              cout << "\n";
                cout << "\n";
          cout << "\n";
            cout << "\n";
              cout << "\n";
    }   

    return 0;
}
