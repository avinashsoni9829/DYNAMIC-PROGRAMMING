#include<bits/stdc++.h>
using namespace std;

bool isSubset(int a[],int n,int sum)
{
	
	
	if(sum==0)
	return true;
	if(n==0)
	return false;
	
	if(a[n-1]>sum)
	return isSubset(a,n-1,sum);
	
	return isSubset(a,n-1,sum) || isSubset(a,n-1,sum-a[n-1]);
	
	
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	int sum;
	cin>>sum;
	
	if(isSubset(a,n,sum))
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
