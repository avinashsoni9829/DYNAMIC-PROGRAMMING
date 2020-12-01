//top-down

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 



ll nCr(ll n,ll r)
{
	ll dp[n+1][r+1];
	
	for(ll i=0;i<=n;++i)
	{
		for(ll  j=0;j<=min(i,r);++j)
		{
			if(j==0 or j==i)
			dp[i][j]=1;
			else
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	
	return dp[n][r];
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		cout<<nCr(n,r)<<endl;
		
	}
}