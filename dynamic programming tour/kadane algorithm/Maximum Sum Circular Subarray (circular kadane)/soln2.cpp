class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int n=A.size();
        int max_straightsum=INT_MIN;
        int min_straightsum=INT_MAX;
        int array_sum=0;
        
        int temp_minSUM=0;
        int temp_maxSUM=0; 
        
        for(int i=0;i<n;++i)
        {
            array_sum+=A[i];
            temp_maxSUM+=A[i];
            
            max_straightsum=max_straightsum<temp_maxSUM?temp_maxSUM:max_straightsum;
            temp_maxSUM=temp_maxSUM<0?0:temp_maxSUM;
            
            temp_minSUM+=A[i];
             min_straightsum=min_straightsum>temp_minSUM?temp_minSUM:min_straightsum;
            temp_minSUM=temp_minSUM>0?0:temp_minSUM;
            
        }
        
        if(array_sum==min_straightsum)
            return max_straightsum;
        return max(max_straightsum,(array_sum-min_straightsum));
            
    }
};
