#include <iostream>
using namespace std;

int pos;

bool isthere(int a[], int n, int ans)
{
    for(int i=0; i < n; i++)
    {
        if(a[i]==ans)
        {
            pos = i;
            return true;
        }
    }
    return false;
}

int maxm(int a[], int n)
{
    int max=0;
    for(int i=0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
	// your code goes here
	int T, n;
	cin >> T;
	while (T--)
	{
	    cin >> n;
	    int a[n], ans;
	    for (int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	    }
	    ans = a[0];
	    for(int i = 1; i < n; i++)
	    {
	        ans = ans^a[i];
	    }
	    if (ans == 0)
	        cout << 0;
	        
	    else
	    {
	        if(isthere(a, n, ans))
	        {
	            ans = a[0];
	            for(int i = 1; i < n; i++)
	            {
	                if(pos == 0)
	                {
                        ans = a[1];
                        i++;
	                    continue;
	                }
	                if(i == pos)
	                    continue;
	                    
	                ans = ans^a[i];
	            }
	            
	            cout << ans;
	        }
	        else
	        {
	            int max = maxm(a, n);
	            ans = a[0];
	            for(int i = 1; i < n; i++)
        	    {
        	        if(a[0] == max)
	                {
                        ans = a[1];
                        i++;
	                    continue;
	                }
        	        if (a[i] == max)
        	            continue;
        	            
        	        ans = ans^a[i];
        	    }
        	    cout << ans;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
