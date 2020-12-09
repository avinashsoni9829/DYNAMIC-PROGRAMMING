// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
	public:
	
	   bool isSubset(vector<int>nums,int n,int sum)
	   {
	       
	       if(sum==0)
	       return true;
	       if(n==0)
	       return false;
	       
	       if(nums[n-1]>sum)
	       return isSubset(nums,n-1,sum);
	       
	       return isSubset(nums,n-1,sum)||isSubset(nums,n-1,sum-nums[n-1]);
	       
	       
	       
	       
	       
	   }

		int DivisibleByM(vector<int>nums, int m){
        
        int sum=0;
        
        for(auto z:nums)
        sum+=z;
        
        int d=1;
        
        while(m*d<=sum)
        {
            if(isSubset(nums,nums.size(),m*d))
            {
                return 1;
            }
            else
            d++;
        }
        return 0;
        
		
		    
		}
		
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
