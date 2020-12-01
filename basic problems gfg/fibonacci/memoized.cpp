// memoized fibonacci


#include<bits/stdc++.h>
using namespace std;
const int mx=1e5;
int dp[mx];

int fib(int n)
{
	if(n<=1)
	return n;
	
	if(dp[n]!=-1)
	return dp[n];
	
	return dp[n]=fib(n-1)+fib(n-2);
	
}



int main()
{
	memset(dp,-1,sizeof(dp));
	dp[0]=0;
	dp[1]=1;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<fib(n)<<endl;
	}
	
}