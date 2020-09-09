
//link:https://practice.geeksforgeeks.org/problems/subset-sum-problem/0
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
int bits_count(unsigned int u)
{
     unsigned int uCount;

     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

ll f(ll a)
{

return 0;

}



void pre()
{

}
bool dp[1002][1002];


bool is_present(vector<int>&a,int n,int sum)
{
    
    if(n==0) return false;
    if(sum==0) return true;
    
    if(dp[])
    
    
	 
}



void solve()
{
    memset(dp,false,sizeof(dp));
	int n;
	cin>>n;
	vi a(n);
	inp(a)
	ll sum=0;
	for(auto z:a) sum+=z;
	
	if(sum&1)
	{
		cout<<"NO"<<endl;
		return;
	}
	
	
	
	if(is_present(a,n,sum/2))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
