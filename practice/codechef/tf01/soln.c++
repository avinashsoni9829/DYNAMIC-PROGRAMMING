
// Problem : Subset Sum
// Contest : CodeChef - Practice(Extcontest)
// URL : https://www.codechef.com/problems/TF01
// Memory Limit : 256 MB
// Time Limit : 0 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
const long long int  modu=1e9+7;
#define endl '\n'
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define inp(x)  for(auto &t:x) cin>>t;
#define itr     vector<int>::iterator
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;
#define ff first
#define ss second
#define pb push_back
#define initialize(a,v)  for(int i=0;i<a.size();++i) a[i]=v;
#define all(x) x.begin(),x.end()
#define mpt(mp) for(auto it=mp.begin();it!=mp.end();it++)
#define trav(x) for(int i=0;i<(int)x.size();++i)
#define mkp(a,b) make_pair(a,b)
#define sz(x)  (int)x.size()

int noofdig(int N)
{
	return floor(log10(N))+1;
}


ll f(ll a)
{

return 0;

}



void pre()
{

}

bool is_present(vector<int>&a,int n,int sum)
{
	  bool dp[n+1][sum+1];
	  memset(dp,false,sizeof(dp));
	  for(int i=0;i<=n;++i)
	  {
	  	for(int j=0;j<=sum;++j)
	  	{
	  		if(i==0)
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
	  		{
	  			dp[i][j]=dp[i-1][j];
	  		}
	  		else
	  		{
	  			dp[i][j]=((dp[i-1][j]) or (dp[i-1][j-a[i-1]]));
	  		}
	  	}
	  }

	  return dp[n][sum];
}



void solve()
{

    int n,sum;
    cin>>n>>sum;
    vi a(n);
    inp(a)
    
    cout<<(is_present(a,n,sum)==true)<<endl;
    





}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
