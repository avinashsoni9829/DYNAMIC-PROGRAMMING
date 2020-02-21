//tabulation
// time complexity: O(N*K)
#include <bits/stdc++.h>
using namespace std;
 
int permutationCoeff(int n, int k) 
{ 
	int dp[n + 1][k + 1]; 

 
	for (int i = 0; i <= n; i++) 
	{ 
		for (int j = 0; j <= min(i, k); j++) 
	
		{
				if (j == 0) 
				dp[i][j] = 1; 

			else
				dp[i][j] = dp[i - 1][j] + (j * dp[i - 1][j - 1]); 

			
			dp[i][j + 1] = 0; 
		} 
	} 
	return dp[n][k]; 
} 

// Driver Code 
int main() 
{ 
	while(1)
	{
		int n,k;
		cin>>n>>k;
		cout<<permutationCoeff(n,k)<<endl;
		
	 } 
} 

