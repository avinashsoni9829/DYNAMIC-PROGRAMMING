#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





class Solution{
    const long long int modu=1e9+7;

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
        int dp[n+1][sum+1];
        
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=sum;++j)
            {
                // no of element is zero
                if(i==0)
                dp[i][j]=0;
                //sum is zero so 1 is the count 
                if(j==0)
                dp[i][j]=1;
                
            }
        }
        
        
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=sum;++j)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-arr[i-1]])%modu;
                }
                else
                {
                    dp[i][j]= (dp[i-1][j])%modu;
                }
            }
        }
        
        return (dp[n][sum])%modu;
	}
	  
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends
