class Solution {
public:
     int mod = 1000000007;
    int f(int end,int zero, int one,vector<int> &dp){
        
        if(dp[end]!=-1){
            return dp[end];
        }
        int count=0;
        if(end>=zero){
            count += f(end-zero,zero,one,dp);
        }
        if(end>=one){
            count += f(end-one,zero,one,dp);
        }
        dp[end]=count%mod;
        return dp[end];
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);
        dp[0]=1;
        int ans=0;
        for(int e=low; e<=high; e++){
            ans += f(e,zero,one,dp);
            ans %= mod;
        }
        return ans;
    }
};