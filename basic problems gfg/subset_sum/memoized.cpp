#include<bits/stdc++.h>
using namespace std;

int  dp[1000][1000];

int isSubset(int a[],int n,int sum)
{
	if(sum==0)
	return 1;
	if(n==0)
	return 0;
	
	if(dp[n][sum]!=-1)
	return dp[n][sum];
	
	if(a[n-1]>sum)
	return dp[n][sum]=isSubset(a,n-1,sum);
	
	return dp[n][sum]=isSubset(a,n-1,sum)||isSubset(a,n-1,sum-a[n-1]);
	
	

	
}






int main()
{
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	int sum;
	cin>>sum;
	
	if(isSubset(a,n,sum)==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	
	return 0;
	
	
}