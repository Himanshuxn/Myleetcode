class Solution {
public:
    void bt(int ind,vector<int> &ds,vector<int>& nums,vector<vector<int>>& ans,vector<int>& freq) {
        if(nums.size()==ds.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                bt(0,ds,nums,ans,freq);
                ds.pop_back();
                freq[i]=0;
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(),0);
        bt(0,ds,nums,ans,freq);
        return ans;
    }
};