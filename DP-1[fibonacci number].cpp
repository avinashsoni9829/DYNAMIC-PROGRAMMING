//tabulation : bottom to top approach
//time complexity: O(n)
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
	int dp[n+1];
	dp[0]=0;dp[1]=1;
	for(int i=2;i<=n;i++)
	dp[i]=dp[i-1]+dp[i-2];
	
	return dp[n];
}

int main()
{
	while(1)
	{
	
	int n;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	
    }
}


