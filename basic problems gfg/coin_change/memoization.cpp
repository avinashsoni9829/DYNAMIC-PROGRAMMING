// memoization
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const ll mx=1e5;
ll dp[mx][mx];

ll coinchange(vector<int>a,int n,int v)
{
	if(v==0)
	return 1;
	if(v<0)
	return 0;
	if(n<=0 and v>=1)
	return 0;
	
	if(dp[n][v]!=-1)
	return dp[n][v];
	
	return dp[n][v]=coinchange(a,n-1,v)+coinchange(a,n,v-a[n-1]);
	
}



int main()
{
	
	
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;++i)
		cin>>a[i];
		int v;
		cin>>v;
		
		cout<<coinchange(a,n,v)<<endl;
	}
}
