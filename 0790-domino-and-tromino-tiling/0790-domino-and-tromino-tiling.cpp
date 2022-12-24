class Solution {
public:
    int f(int ind,int n,vector<int> &dp){
        if(ind<0){
            return 0;
        }
        if(ind==0){
            return dp[ind]=1;
        }
        if(ind==1){
            return dp[ind]=2;
        }
        if(ind==2){
            return dp[ind]=5;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        return dp[ind]=2*dp[ind-1]+dp[ind-3];
    }
    int numTilings(int n) {
       vector<int>dp(n+5,0);
        int mod=1000000007;
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;
        for(int i=4;i<=n;i++){
            dp[i]=((2*((dp[i-1])%mod))%mod+(dp[i-3])%mod)%(mod);
        }
        return dp[n];
    }
};