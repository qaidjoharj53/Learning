#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t, n, i;
    string s;
    cin >> t;
    while (t--)
    {
        int p = 0;
        cin >> n;
        cin >> s;
        if (n == 1)
        {
            cout << p << endl;
        }
        else
        {
            for (i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1])
                {
                    goto els;
                }
                else
                {
                    cout << p << endl;
                    break;
                }
            }
        }
    els:
        p++;
        for (i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                break;
            }
        }
        while (i < n)
        {
            if (s[i] == 0)
                s[i] = 1;
            else if (s[i] == 1)
                s[i] = 0;
            i++;
        }
    }
}