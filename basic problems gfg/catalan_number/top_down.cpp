// top down approach

#include<bits/stdc++.h>
using namespace std;

int catalan(int n)
{
	int dp[n+1];
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;++i)
	{
		dp[i]=0;
		
		for(int j=0;j<i;++j)
		{
			dp[i]+=dp[j]*dp[i-j-1];
		}
	}
	
	return dp[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<catalan(n)<<endl;
	}
}