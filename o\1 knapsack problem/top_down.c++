#include<bits/stdc++.h>
using namespace std;

int knapsack(int a[],int b[],int n,int w)
{
  int dp[n+1][w+1];

  for(int i=0;i<=n;++i)
  {
    for(int j=0;j<=n;++j)
    {
      if(i==0 or j==0)
      dp[i][j]=0;

      if(b[i-1]<=j)
      {
        dp[i][j]=max(a[i-1]+dp[i-1][w-b[i-1]],dp[i-1][j]);
      }
      else
      {
        dp[i][j]==dp[i-1][j];
      }
    }
  }
  return dp[n][w];
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int w;
    cin>>w;

    int a[n];
    int b[n];

    for(int i=0;i<n;++i)
    {
      cin>>a[i];
    }
    for(int j=0;j<n;++j)
    {
      cin>>b[i];
    }

    cout<<knapsack(a,b,n,w)<<endl;
  }

}
