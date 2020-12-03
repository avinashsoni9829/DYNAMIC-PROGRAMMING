#include<bits/stdc++.h>
using namespace std;

int coinchangerecur(vector<int>&a,int n,int v)
{
	if(v==0)
	return 1;
	if(v<0)
	return 0;
	
	if(n<=0 and v>=1)
	return 0;
	
	return coinchangerecur(a,n-1,v)+coinchangerecur(a,n,v-a[n-1]);
	
	
}









int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int v;
		cin>>v;
	                    	
		vector<int>a(n);
		for(int i=0;i<n;++i)
		cin>>a[i];
		
		cout<<coinchangerecur(a,n,v)<<endl;
	}
	
	return 0;
}