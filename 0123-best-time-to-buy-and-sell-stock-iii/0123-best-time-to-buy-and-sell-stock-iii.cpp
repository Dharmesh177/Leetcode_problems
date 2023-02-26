class Solution {
public:
    int f(int i,int buy, int cap,vector<int>&prices,vector<vector<vector<int>>>&dp){
        if(i==prices.size()) return 0;
        if(cap==0) return 0;
        int profit=0;
        if(dp[i][buy][cap] != -1) return dp[i][buy][cap];
        if(buy==1){
            profit=max(-prices[i]+f(i+1,0,cap,prices,dp),0+f(i+1,1,cap,prices,dp));
        }else{
            profit=max(prices[i]+f(i+1,1,cap-1,prices,dp),0+f(i+1,0,cap,prices,dp));
        }
        return dp[i][buy][cap] =  profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        //3d dp
        vector<vector<vector<int>>> dp(n+1,
               vector<vector<int>>(2,
                      vector<int>(3,0)));
        
//         for(int ind=0; ind<n; ind++){
//             for(int buy=0; buy<2; buy++){
//                 dp[ind][buy][0] = 0;
//             }
//         }
        
//         for(int buy=0; buy<2; buy++){
//             for(int cap=0; buy<3; cap++){
//                 dp[n][buy][cap] = 0;
//             }
//         }
//         int profit = 0;
        for(int i=n-1; i>=0; i--){
            for(int buy=0; buy<=1; buy++){
                for(int cap=1; cap<=2; cap++){
                     if(buy==1){
            dp[i][buy][cap]=max(-prices[i]+dp[i+1][0][cap],0+dp[i+1][1][cap]);
        }else{
            dp[i][buy][cap]=max(prices[i]+dp[i+1][1][cap-1],0+dp[i+1][0][cap]);
        }
                }
            }
        }
        return dp[0][1][2];
    }
};