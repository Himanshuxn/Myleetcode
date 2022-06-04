class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxhere=0;
    int maxtillnow = INT_MIN;
    for(int i = 0 ; i<n;i++)
    {
     maxhere+=nums[i];
    
     maxtillnow = max(maxtillnow,maxhere);
        if(maxhere<0)
    maxhere = 0;
    
    
    
    }
        return maxtillnow;
    }
};