class Solution {
public:
    int lcs(int i,int j,string text1, string text2,vector<vector<int>> &dp){
         int n =text1.size();
        int m=text2.size();
         if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(text1[i]==text2[j]){
            return dp[i][j] =  1 + lcs(i-1,j-1,text1,text2,dp);
        }
        return dp[i][j] =  max(lcs(i-1,j,text1,text2,dp),lcs(i,j-1,text1,text2,dp));
        
       
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n =text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        for(int i=0; i<=n; i++){
            dp[i][0]=0;
        }
        for(int j=0; j<=m; j++){
            dp[0][j]=0;
        }
        for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(text1[ind1-1]==text2[ind2-1])
                dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
            else
                dp[ind1][ind2] = 0 + max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
        }
    }
        // int ans=lcs(n-1,m-1,text1,text2,dp);
        return dp[n][m];
        
        
    }
};