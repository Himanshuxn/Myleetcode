class Solution {
public:
   int mx(int index,int buy,int n,vector<vector<int>>&dp,vector<int> &prices)
   {
     if(index == n)
       return 0;
     if(dp[index][buy]!=-1)return dp[index][buy];
     if(buy)
     {
       return dp[index][buy] = max(-prices[index]+mx(index+1,0,n,dp,prices),0+mx(index+1,1,n,dp,prices));
     }
     else
     {
      return dp[index][buy] = max(prices[index]+mx(index+1,1,n,dp,prices),0+mx(index+1,0,n,dp,prices));
     }
   }
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
  vector<vector<int>>dp(n,vector<int>(2,-1));
    return mx(0,1,n,dp,prices);   
    }
};