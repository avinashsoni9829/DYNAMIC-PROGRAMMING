#include<bits/stdc++.h>
using namespace std;
const int mx=100;

int maxgold(int a[][mx],int n)
{
	
	int dp[n][n];
	memset(dp,0,sizeof(dp));
	
	for(int j=n-1;j>=0;j--)
	{
		for(int i=0;i<n;++i)
		{
			int right=(j==n-1)? 0: dp[i][j+1];
			int daig_up=(i==0 or j==n-1)? 0 : dp[ifor-1][j+1];
			int daig_down=(i==n-1 or j==n-1)?0:dp[i+1][j+1];
			
			dp[i][j]=dp[i][j]+max({right,daig_up,daig_down});
		}
	}
	
	int ans=dp[0][0];
	for(int i=1;i<n;++i)
	{
		ans=max(ans,dp[i][0]);
		
	}
	
	return ans;
	
	
	
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		
		for(int i=0;i<n;++i)
		{
		  for(int j=0;j<n;++j)
		  {
		  	cin>>a[i][j];
		  }
		}
		
		cout<<maxgold(a,n)<<endl;
	}
}
