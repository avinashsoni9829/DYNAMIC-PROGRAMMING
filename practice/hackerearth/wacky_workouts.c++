#include<bits/stdc++.h>
using namespace std;
const long long int  modu=1000000007;
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


ll fib(ll n)
{
	
	ll f[2][2]={{1,1,},{1,0}};
	ll res[2][2]={{1,1},{0,1}};
	ll tmp[2][2]={{0,0},{0,0}};
	
	
	while(n)
	{
		if(n&1)
		{
			//compute
			memset(tmp,0,sizeof(tmp));
			for(int i=0;i<2;++i)
			{
				for(int j=0;j<2;++j)
				{
					for(int k=0;k<2;++k)
					{
						tmp[i][j]+=(res[i][k]*f[k][j])%modu;
					}
				}
			}
				//restore
			for(int i=0;i<2;++i)
			{
				for(int j=0;j<2;++j)
				{
						res[i][j]=tmp[i][j];
				}
			}
		
			
		}
		
		
		memset(tmp,0,sizeof(tmp));
		//compute
			memset(tmp,0,sizeof(tmp));
			for(int i=0;i<2;++i)
			{
				for(int j=0;j<2;++j)
				{
					for(int k=0;k<2;++k)
					{
						tmp[i][j]+=(f[i][k]*f[k][j])%modu;
					}
				}
			}
				//restore
			for(int i=0;i<2;++i)
			{
				for(int j=0;j<2;++j)
				{
						f[i][j]=tmp[i][j];
				}
			}
		
		
		
		n>>=1;
	
		
	}
	
	return (res[0][1]%modu);
   
}






void solve()
{
	ll n;
	cin>>n;
	cout<<fib(n+1)<<endl;
	






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
