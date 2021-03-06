class Solution {
public:
    int hb2(vector<int> &nums)
    {
        int n = nums.size();
        int dp[n+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i = 1 ; i<n;i++)
        {
            dp[i+1]=max(dp[i],dp[i-1]+nums[i]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
    vector<int> v1(nums.begin(),nums.end()-1);
    vector<int> v2(nums.begin()+1,nums.end());
        return max(hb2(v1),hb2(v2));
    }
};