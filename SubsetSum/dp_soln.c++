//recursion
/*


bool isSubsetpresent(int a[],int sum,int n)
{

  //base conditions

  // sum=0 or a.size()=0

  if(sum==0) return true;

  if(a.size()==0) return false;
//dont include it
  if(a[n-1]>=sum)
  return (a,sum,n-1);
  else
  return (a,sum-a[n-1],n-1) or (a,sum,n-1);

}


int main()
{
  int arr;
  int sum;
  check(arr,sum)  -> yes or no
}


*/

#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>&a,int n,int sum)
{
  /* if sum=0 return true;  else ifa.size()=0 return false;                          */

  bool dp[n+1][sum+1];
   //initialization
  //if n==0 false
  // if sum=0 true

  memset(dp,false,sizeof(dp));
  // i->size j->sum
  for(int i=0;i<=n;++i)
  {
    for(int j=0;j<=sum;++j)
    {
      if(i==0) //size =0
      dp[i][j]=false;
      if(j==0)
      dp[i][j]=true;

    }
  }

  for(int i=1;i<=n;++i)
  {
    for(int j=1;j<=sum;++j)
    {
      if(a[i-1]>j)
      { //if value at i-1 size is greater than sum at that point dont include it
        dp[i][j]=dp[i-1][j];  //i=i-1 as size is reduced but sum is same
      }
      else
      dp[i][j]=((dp[i-1][j]) or(dp[i-1][j-a[i-1]]));  // either include it or not
    }
  }

  return dp[n][sum];
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &z:a)
    cin>>z;
    int sm;
    cin>>sm;

    cout<<check(a,n,sm)<<endl;

  }
}
