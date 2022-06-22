class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n = prices.size();
     int maxcurr = 0;  
      int maxsofar = 0;
      for(int i = 1;i<n;i++)
      {
        maxcurr = max(0,maxcurr+=prices[i]-prices[i-1]);
        maxsofar = max(maxcurr,maxsofar);
      }
      return maxsofar;
    }
};