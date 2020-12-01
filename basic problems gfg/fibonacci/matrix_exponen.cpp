// O(logn) matrix exponentiation

#include<bits/stdc++.h>
using namespace std;

void mul(int f[2][2],int m[2][2]);
void expo(int f[2][2],int n);




void mul(int f[2][2],int m[2][2])
{
	int x=f[0][0]*m[0][0]+f[0][1]*m[1][0];
	int y=f[0][0]*m[0][1]+f[0][1]*m[1][1];
	int z=f[1][0]*m[0][0]+f[1][1]*m[1][0];
	int w=f[1][0]*m[0][1]+f[1][1]*m[1][1];
	
	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=z;
	f[1][1]=w;
	
}



void expo(int f[2][2],int n)
{
	if(n<=1)
	return;
	int m[2][2]={{1,1},{1,0}};
	
	expo(f,n/2);
	mul(f,f);
	if(n&1)
	mul(f,m);
	
}







int fib(int n)
{
	int f[2][2]={{1,1},{1,0}};
	if(n==0)
	return 0;
	
	expo(f,n-1);
	
	return f[0][0];
}






int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<fib(n)<<endl;
		
	}
}