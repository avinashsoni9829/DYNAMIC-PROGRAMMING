//tabulation method 
//time complexity:O(N^2)
#include <bits/stdc++.h>
using namespace std;

unsigned long long int catalandp(unsigned int n)
{
	unsigned long long int dp[n+1];
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=0;
		for(int j=0;j<i;j++)
		dp[i]+=dp[j]*dp[i-j-1];
		
	}
	return dp[n];
}

int main()
{
	while(1)
	{
		unsigned int n;
		cin>>n;
		cout<<catalandp(n)<<endl;
		
	}
}

