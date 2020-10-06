
// Problem: Alphacode
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/ACODE/
// Memory Limit: 1536 MB
// Time Limit: 500 ms
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



void solve()
{
	string s;
	while(cin>>s and s!="0")
	{
		int n=s.length();
		ll dp[n+1]={0};
		dp[0]=1;
		dp[1]=(s[0]!=0);
		
		for(int i=2;i<=n;++i)
		{
			int d=stoi(s.substr(i-2,2));
			if(s[i-1]!='0')
			dp[i]+=dp[i-1];
			
			if(d>=10 and d<=26)
			{
				dp[i]+=dp[i-2];
				
			}
		}
		
		cout<<dp[n]<<endl;
		
	}

}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
}
