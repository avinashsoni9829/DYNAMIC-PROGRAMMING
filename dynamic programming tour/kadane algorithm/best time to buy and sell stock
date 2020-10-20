class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int overall_max=0;
        
        int n=prices.size();
        
        for(int i=0;i<n;++i)
        {
             mn=min(prices[i],mn);
             int curr_max=prices[i]-mn;
             overall_max=max(curr_max,overall_max);
        }
        
        return overall_max;
        
    }
};
