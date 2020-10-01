// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  #define ll long long int
  const ll modu=1e9 + 7;
  public:
  // fibonacci in log N time 
  /*
    00  01
    10  11
  
  
  
  */
  
  void mul (ll f[2][2] , ll m[2][2])
  {
      ll x= (f[0][0] * m[0][0]) % modu + (f[0][1] * m[1][0])%modu;
      
      ll y= (f[0][0] * m[0][1]) %modu + (f[0][1] * m[1][1]) %modu;
      
      ll z= (f[0][1] * m[0][0])%modu + (f[1][1] * m[1][0])%modu;
      
      ll w= (f[0][1] * m[0][1] ) %modu + (f[1][1] * m[1][1] ) %modu;
      
      f[0][0]=x%modu;
      f[0][1]=y%modu;
      f[1][0]=z%modu;
      f[1][1]=w%modu;
      
  }
  
  
  
  void expo(ll f[2][2],ll n)
  {
      if(n<=1)
      return;
      ll m[2][2]= {{1,1},{1,0}};
      
      expo(f,n/2);
      mul(f,f);
      if(n&1)
      mul(f,m);
      
  }
  
  
  
  
  
  ll fib(ll n)
  {
      if(n==0)
      return 0;
      
      ll f[2][2]={{1,1},{1,0}};
      expo(f,n-1);
      
      return f[0][0]%modu;
      
  }
  
    long long numberOfWays(long long N) {
        return fib(N+1)%modu;
       
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
