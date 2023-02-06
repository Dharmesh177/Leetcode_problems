class Solution {
public:
    int f(int i,int amt,vector<int>&nums,vector<vector<int>> &dp){
        if(i==0){
            if(amt%nums[0]==0){
                return amt/nums[0];
            }
            return 1e9;
        }
        if(dp[i][amt]!=-1) return dp[i][amt];
        int notTake = 0 + f(i-1,amt,nums,dp);
        int take=INT_MAX;
        if(nums[i]<=amt){
            take=1+f(i,amt-nums[i],nums,dp);
        }
     return dp[i][amt] = min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amt) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amt+1,-1));
        // if(n==1 && coins[0]<amt){return -1;}
       int ans =  f(n-1,amt,coins,dp);
        if(ans >= 1e9) return -1;
        return ans;
    }
};