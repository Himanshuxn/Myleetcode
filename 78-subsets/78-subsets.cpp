class Solution {
    public:
    void subs(vector<int>& nums,vector<vector<int>> &ans,vector<int>& li, int n,int ind) 
    {
       if(ind>=n) 
       {
         ans.push_back(li);
       }
        else{
        li.push_back(nums[ind]);
        subs(nums,ans,li,n,ind+1);
        li.pop_back();
        subs(nums,ans,li,n,ind+1);
        return;
        }
    }
    public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> li;
        int ind=0;
        int n=nums.size();
        subs(nums,ans,li,n,ind);
        return ans;
        
    }
};