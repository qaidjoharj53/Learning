#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        char str[n];
        cin >> str;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 && str[i] == '1' && flag == 1)
            {
                cout << "YES" << endl;
            }
            else if (str[i] == '1')
            {
                if (flag == 0)
                {
                    cout << "NO" << endl;
                }
                else
                    cout << "IDK" << endl;
            }
            else
            {
                cout << "NO" << endl;
                flag = 0;
            }
        }
    }
    return 0;
}
