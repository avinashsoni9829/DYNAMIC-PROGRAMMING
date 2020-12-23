#include <bits/stdc++.h>
using namespace std;
const int mx=205;
int dp[mx][mx];

int check(int n,int k)
{
    if(n==1)
    {
        return 1;
        
    }
    else
    if(dp[n][k]!=-1)
    return dp[n][k];
    else
    return dp[n][k]=(check(n-1,k)+k-1)%n+1;
    
      
}

int main() {
    memset(dp,-1,sizeof(dp));
	int T;
	cin>>T;
	while(T--)
	{
	    int n,k;
	    cin>>n>>k;
	    cout<<check(n,k)<<endl;
	    
	}
	return 0;
}
