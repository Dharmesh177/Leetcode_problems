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
        
       
        // int profit = 0;
         for(int ind = n-1; ind>=0; ind--){
        for(int buy = 0; buy<=1; buy++){
            for(int cap=1; cap<=2; cap++){
                
                if(buy==0){// We can buy the stock
                    dp[ind][buy][cap] = max(0+dp[ind+1][0][cap], 
                                -prices[ind] + dp[ind+1][1][cap]);
                 }
    
                if(buy==1){// We can sell the stock
                    dp[ind][buy][cap] = max(0+dp[ind+1][1][cap],
                                prices[ind] + dp[ind+1][0][cap-1]);
                }
            }
        }
    }
    
    
    // return dp[0][1][2];
   
        return dp[0][0][2];
    }
};