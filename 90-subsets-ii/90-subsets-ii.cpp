class Solution {
    public:
    void bt(int ind,vector<int>& nums,vector<vector<int>> &ans, vector<int>& li ) {
    if(li.size()==nums.size())
    {
       ans.push_back(li);
        return;
    }
    ans.push_back(li);
    for(int i=ind;i<nums.size();i++)
    {
        if(i!=ind && nums[i]==nums[i-1]) continue;
        li.push_back(nums[i]);
        bt(i+1,nums,ans,li);
        li.pop_back();
    }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     vector<int> li;
     vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        bt(0,nums,ans,li);
        return ans;
    }
};