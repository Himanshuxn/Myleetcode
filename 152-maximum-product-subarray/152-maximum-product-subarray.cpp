class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int p=nums[0];
    int pp= nums[0];
    int ans = nums[0];
    for(int i = 1;i<nums.size();i++)
    {
     int temp =max( {nums[i],p*nums[i],pp*nums[i]});
       pp = min({nums[i],p*nums[i],pp*nums[i]});
       p = temp;
      ans=max(ans,p);
    }
    return ans;
    }
};