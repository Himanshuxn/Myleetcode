class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(auto i : nums)
        {
            if(i==0)
            count=0;
            if(i==1){
            count++;
            ans=max(count,ans);
            }
        }
        return ans;
    }
};