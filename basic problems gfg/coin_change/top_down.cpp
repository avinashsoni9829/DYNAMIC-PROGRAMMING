#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


ll coinchange(vector<int>a,int n,int v)
{
	int d[v+1][n];
	
	for(int i=0;i<n;++i)
	dp[0][i]=1;
	
	for(int i=0;i<=v;++i)
	{
		for(int j=0;j<n;++j)
		{
			int x,y;
			// include
			
			x=(i-a[j]>=0)? dp[i-a[j]][j]:0;
			y=(j>=1)? dp[i][j-1]:0;
			dp[i][j]=x+y;
			
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=1;i<=n;++i)
		{
			cin>>a[i];
		}
		
		int v;
		cin>>v;
		
		cout<<coinchange(a,n,v)<<endl;
	}
}
