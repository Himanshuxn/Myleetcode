class Solution {
public:
     int climbStair(int n,vector<int>& dp) {
      if(n<=1)
         return dp[n]=1;
       else
       {
           if(dp[n]!=-1)
               return dp[n];
           else
               return dp[n]=climbStair(n-1,dp)+climbStair(n-2,dp);
       }
    }
    int climbStairs(int n) {
     vector<int> dp(n+1,-1);
     return climbStair(n,dp) ; 
    }
};