#include<bits/stdc++.h>
using namespace std;

int knapsackRecursive(int weight[],int profit[],int capacity,int n)
{
  //base conditions  [ no object is left to be put in the bag or bag is full]

  if(n==0 or capacity==0)
  return 0;
 // given weight is less than the bag capacity
 // so here we have two choices that we can put this item in the bag or not
// so since we need to find the maximum profit so we look for maximum out of the both the scenarios


  if(weight[n-1]<=capacity)
  {
    int ifincluded    =  profit[n-1]+knapsackRecursive(weight,profit,capacity-weight[n-1],n-1);
    int ifnotincluded =  0+knapsackRecursive(weight,profit,capacity,n-1);

    //maximizing profit

    return max(ifincluded,ifnotincluded);
  }
  //weight of the item > bag capacity so skip this item
  else
  {
    return knapsackRecursive(weight,profit,capacity,n-1);
  }

}

int main()
{
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
