#include<bits/stdc++.h>
using namespace std;



int recurcatalan(int n)
{
	if(n<=1)
	return 1;
	
	long long int ans=0;
	
	for(int i=0;i<n;++i)
	{
		ans+=recurcatalan(i)*recurcatalan(n-i-1);
	}
	
	return ans;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<recurcatalan(n)<<endl;
	}
}