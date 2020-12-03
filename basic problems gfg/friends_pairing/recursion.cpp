#include<bits/stdc++.h>
using namespace std;



int pairs(int n)
{
   if(n<=2)
   {
   	return n;
   }	
   
   return pairs(n-1)+pairs(n-2)*(n-1);
   
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<pairs(n)<<endl;
	}
}