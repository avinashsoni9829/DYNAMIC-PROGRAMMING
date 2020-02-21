/*  BELL TRIANGLE
1
1 2
2 3 5
5 7 10 15
15 20 27 37 52
*/

//no of ways to partition a set of length n
//tabulation method 
//time complexity:O(N^2)

#include <bits/stdc++.h>
using namespace std;


int bellnumber(int n)
{
	int dp[n+1][n+1];
	dp[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		dp[i][0]=dp[i-1][i-1];
		for(int j=1;j<=i;j++)
		{
			dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
		}
	}
	return dp[n][0];
	
}

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		cout<<bellnumber(n)<<endl;
		
	}
}


