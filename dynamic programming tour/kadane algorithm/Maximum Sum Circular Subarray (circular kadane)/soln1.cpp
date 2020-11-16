//using prefix and suffix array

class Solution {
public:
   
    
    int maxSubarraySumCircular(vector<int>& A) {
         int n=A.size();
        int ans=A[0];
        int curr_max=A[0];
        for(int i=1;i<n;++i)
        {
            curr_max=A[i]+max(curr_max,0);
            ans=max(curr_max,ans);
            
        }
       
        int suff[n];
        suff[n-1]=A[n-1];
        for(int i=n-2;i>=0;--i)
            suff[i]=suff[i+1]+A[i];
        
        int maxR[n];
        maxR[n-1]=A[n-1];
        
        for(int i=n-2;i>=0;--i)
            maxR[i]=max(maxR[i+1],suff[i]);
        
        int pre=0;
        
        for(int i=0;i<n-2;++i)
        {
            pre+=A[i];
            ans=max(ans,pre+maxR[i+2]);
        }
        
        return ans;
    }
};
