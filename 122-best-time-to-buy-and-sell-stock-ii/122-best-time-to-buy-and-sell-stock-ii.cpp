class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxsofar = 0,maxcurr = 0;
      int n = prices.size();
      for(int i= 1;i<n;i++)
      {
        maxcurr = max(0,prices[i]-prices[i-1]);
        if(maxcurr>0)
        {
         maxsofar+=maxcurr;
         maxcurr = 0;
        }
      }
      return maxsofar;
    }
};