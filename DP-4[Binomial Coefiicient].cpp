//tabulation
// time complexity: O(N*K)
#include <bits/stdc++.h>
using namespace std;

int binomial(int n,int k)
{
	int dp[n+1][k+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
			dp[i][j]=1;
			else
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	return dp[n][k];
}

int main()
{
	while(1)
	{
		int n,k;
		cin>>n>>k;
		cout<<binomial(n,k)<<endl;
	}
}
