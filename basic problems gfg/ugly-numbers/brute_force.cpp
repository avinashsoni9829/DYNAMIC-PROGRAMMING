// brute force approach
#include<bits/stdc++.h>
using namespace std;


int helper(int a,int b)
{
	while(b%a==0)
	b/=a;
	return b;
}



bool is_ugly(int n)
{
   n=helper(2,n);
   n=helper(3,n);
   n=helper(5,n);
   if(n==1)
   return true;
   return false;
   
	
	
}

int ugly(int n)
{
	int count=0;
	int d=1;
	while(n>count)
	{
		if(is_ugly(d))
		count+=1;
		d+=1;
	}
	
	return (d-1);
	
}





int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<ugly(n)<<endl;
	}
	
}
