//memoization
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
const ll mx=1e5;
ll dp[mx];

ll catalandp(ll n)
{
	if(n<=1)
	return 1;
	
	if(dp[n]!=-1)
	return dp[n];
	
	ll res=0;
	for(int i=0;i<n;++i)
	res+=catalandp(i)*catalandp(n-i-1);
	
	dp[n]=res;
	
	return dp[n];
	
}



int main()
{
	memset(dp,-1,sizeof(dp));
	dp[0]=1;
	dp[1]=1;
	
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<catalandp(n)<<endl;
	}
}