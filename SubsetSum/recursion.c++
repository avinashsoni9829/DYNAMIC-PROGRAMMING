#include<bits/stdc++.h>
using namespace std;


bool subset(vector<int>&a,int n,int sm)
{
  if(sm==0)return true;

  if(n==0) return false;

  if(a[n-1]>sm)
    return subset(a,n-1,sm);

    return subset(a,n-1,sm) or subset(a,n-1,sm-a[n-1]);
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

    if(subset(a,n,sm))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


  }
}
