// fibonacci
#include<bits/stdc++.h>
using namespace std;


int recurfib(int n)
{
	if(n<=1)
	return n;
	
	return recurfib(n-1)+recurfib(n-2);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<recurfib(n)<<endl;
		
	}
}
