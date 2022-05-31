class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
     unordered_map<int,int> hh;
        int sum = 0;
    for(int i = 0;i<n;i++)
    {
        hh[nums[i]]++;
    }
    for(int i=0;i<n;i++)
    {
      if(hh[nums[i]]==1)
          sum+=nums[i];
    }
        return sum;
    }
};