class Solution {
public:
    int findsol(int n,vector<int> &dp){
         if(n==0){
            return dp[n]=1;
        }
         if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        return dp[n] = findsol(n-1,dp)+findsol(n-2,dp);
    }
    int climbStairs(int n) {
       vector<int> dp(n+1,-1);
        int ans =findsol(n,dp);
        return ans;
    }
};