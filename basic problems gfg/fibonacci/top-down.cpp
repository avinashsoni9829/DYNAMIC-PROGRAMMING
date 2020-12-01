// top down approach


#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	int dp[n+1];
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;++i)
	dp[i]=dp[i-1]+dp[i-2];
	
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
		cout<<fib(n)<<endl;
	}
}