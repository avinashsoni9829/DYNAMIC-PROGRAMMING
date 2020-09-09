#include<bits/stdc++.h>
using namespace std;
const int mx=100005;
long long int dp[mx];
const long long int modu=1000000007;


long long int fact(int n)
{
	if(dp[n]!=-1)
	return dp[n];
	else
	return dp[n]=((n%modu) * (fact(n-1))%modu)%modu;
}

void solve()
{   
	
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	dp[0]=1;
	dp[1]=1;
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
