#inlcude<bits/stdc++.c>
using namespace std;

const max=100;


int getmaxgold(int gold[][max],int m,int n)
{
	int dp[m][n];
	memset(dp,0,sizeof(dp));
	
	for(int col=n-1;col>=0;col--)
	{
		for(int row=0;row<m;row++)
		{
			int v1=(col==n-1)?0:dp[row][col+1];
			int v2=(row==0||col==n-1)?0:dp[row-1][col-1];
			int v3=(row==m-1||col==n-1)?0:dp[row+1][col+1];
			
			dp[row][col]=gold[row][col]+max(v1,max(v2,v3));
			
		}
	}
     
    int ans=dp[0][0];
    for(int i=1;i<m;i++)
    ans=max(ans,dp[i][0]);
    return ans;
}
int main()
{
       int n,m;
       cin>>m>>n;
       int a[m][n];
	   for(int i=0;i<m;i++)
	   {
	   	for(int j=0;j<n;j++)
	   	{
	   		cin>>a[i][j];
		}
	   }
	   
	   cout<<getmaxgold(a,m,n);	
}
