#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
const int mx=1e6+5;

int dp[mx];

ll friends(int n)
{
	if(n<=2)
	return dp[n]=n;
	if(dp[n]!=-1)
	return dp[n];
	
	return dp[n]=friends(n-1)+(n-1)*friends(n-2);
}


int  main()
{
	memset(dp,-1,sizeof(dp));
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<friends(n)<<endl;
	}
}