//You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
//Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
//You may assume that you have an infinite number of each kind of coin.
//https://leetcode.com/problems/coin-change/
class Solution {
public:
    int dp[10010];
    int fun(int amount,vector<int>& coins){
      
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
          int ans=INT_MAX;
        for(auto it:coins){
            if(amount-it>=0)
                ans=min(ans+0LL,fun(amount-it,coins)+1LL);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(amount,coins);
        return ans==INT_MAX?-1:ans;
    }
};
