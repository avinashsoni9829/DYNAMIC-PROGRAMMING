#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


ll nCr(ll n,ll r)
{
	// base cases
	if(r>n)
	return 0;
		
	if(r==0 or r==n)
	return 1;
	
	return nCr(n-1,r-1)+nCr(n-1,r);
	
	
}

int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		cout<<nCr(n,r)<<endl;
		
	}
}