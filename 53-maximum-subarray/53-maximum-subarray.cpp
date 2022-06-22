class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int maxcurr = 0;
     int maxsofar = INT_MIN;
     int n = nums.size();
      int sum = 0;
      for(int i= 0;i<n;i++)
      {
        maxcurr+=nums[i];
        
        maxsofar=max(maxsofar,maxcurr);
        if(maxcurr<0)
          maxcurr = 0;
      }
      return maxsofar;
    }
};