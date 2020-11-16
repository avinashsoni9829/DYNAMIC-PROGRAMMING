// kadane algorithm
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
        int n=prices.size();
          if(n==0)
            return 0;
        int curr_min=INT_MAX;
        int ans=INT_MIN;
        
        for(int i=0;i<n;++i)
        {
            curr_min=min(prices[i],curr_min);
            ans=max(ans,prices[i]-curr_min);
        }
        
        return ans;
       
    }
};
