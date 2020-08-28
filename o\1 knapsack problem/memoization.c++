#include<bits/stdc++.h>
using namespace std;
//acoording to the constraints
int dp[1002][1002];




int knapsackRecursive(int weight[],int profit[],int capacity,int n)
{
  //base conditions  [ no object is left to be put in the bag or bag is full]

  if(n==0 or capacity==0)
  return 0;
  //check if value already exists

  if(dp[n][capacity]!=-1)
  {
    return dp[n][capacity];
  }


 // given weight is less than the bag capacity
 // so here we have two choices that we can put this item in the bag or not
// so since we need to find the maximum profit so we look for maximum out of the both the scenarios


  if(weight[n-1]<=capacity)
  {
    int ifincluded    =  profit[n-1]+knapsackRecursive(weight,profit,capacity-weight[n-1],n-1);
    int ifnotincluded =  0+knapsackRecursive(weight,profit,capacity,n-1);

    //maximizing profit

    return dp[n][capacity]=max(ifincluded,ifnotincluded);
  }
  //weight of the item > bag capacity so skip this item
  else
  {
    return dp[n][capacity]=knapsackRecursive(weight,profit,capacity,n-1);
  }

}

int main()
{
  memset(dp,-1,sizeof(dp));
  int n;
  cin>>n;
  // bag capacity
  int capacity;
  cin>>capacity;

  int profit[n];
  int weight[n];
  // input weight array
  for(int i=0;i<n;++i)
  cin>>weight[i];

  //input profit array

  for(int i=0;i<n;++i)
  cin>>profit[i];

  cout<<knapsackRecursive(weight,profit,capacity,n)<<endl;


}
