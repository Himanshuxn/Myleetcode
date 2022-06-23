class Solution {
public:
    int mx(int ind,int buy,int k,vector<vector<vector<int>>> &dp,vector<int> &prices)
    {
      if(ind == prices.size()|| k>=2)
      return 0;
      if(dp[ind][buy][k]!=-1)
      return dp[ind][buy][k];
      if(buy)
      {
       return dp[ind][buy][k] = max(-prices[ind]+mx(ind+1,!buy,k,dp,prices),mx(ind+1,buy,k,dp,prices)); 
      }
      else{
      return dp[ind][buy][k] = max(prices[ind]+mx(ind+1,!buy,k+1,dp,prices),mx(ind+1,buy,k,dp,prices));
      }
    }
    int maxProfit(vector<int>& prices) {
    vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
    return mx(0,1,0,dp,prices);
    }
 // ---------------------------------------------------------------------------------------------
 
};