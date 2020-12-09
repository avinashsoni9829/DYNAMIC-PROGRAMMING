#include<bits/stdc++.h>
using namespace std;


int largestsize(int a[],int n)
{
	int dp[n];
	
	dp[n-1]=1;
	
	for(int i=n-2;i>=0;i--)
	{
		int tmp=0;
		
		for(int j=i+1;j<n;++j)
		{
			if(a[i]%a[j]==0 or a[j]%a[i]==0)
			{
				tmp=max(tmp,dp[j]);
			}
			
		}
		
		dp[i]=tmp+1;
	}
	

	return *max_element(dp,dp+n);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	sort(a,a+n);
	
	cout<<largestsize(a,n)<<endl;
}
