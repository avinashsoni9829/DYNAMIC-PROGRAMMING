// memoization
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx=1e4;

ll dp[mx][mx];


ll nCr(ll n,ll r)
{
	if(r==0 or r==n)
	return 1;
	if(r>n)
	return 0;
	
	if(dp[n][r]!=-1)
	return dp[n][r];
	
	return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
	
}


int main()
{
	memset(dp,-1,sizeof(dp));
	int t;
	cin>>t;
	while(t--)
	{
		int n,r;
		cin>>n>>r;
		cout<<nCr(n,r)<<endl;
	}
} 