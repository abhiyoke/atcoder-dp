/*You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.
You may assume that you have an infinite number of each kind of coin.
The answer is guaranteed to fit into a signed 32-bit integer.*/
//https://leetcode.com/problems/coin-change-ii/
class Solution {
public:
    int dp[310][10010];
    
    int fun1(int ind,int amount,vector<int>&coins){
       
        if(amount==0) return 1;
         if(ind<0) return 0;
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int ways=0;
        for(int coin_amount=0;coin_amount<=amount;coin_amount+=coins[ind]){
          ways+=fun1(ind-1,amount-coin_amount,coins);
            }
        return dp[ind][amount]=ways;
    }
    int change(int amount,vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return fun1(coins.size()-1,amount,coins);
    }
};
