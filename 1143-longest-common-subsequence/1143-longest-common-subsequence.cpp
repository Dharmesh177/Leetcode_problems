class Solution {
public:
    int f(int i1,int i2,string &text1,string &text2,vector<vector<int>> &dp){
        if(i1<0 || i2<0) return 0;
        
        if(dp[i1][i2] !=-1) return dp[i1][i2];
        
        if(text1[i1]==text2[i2]){
            return dp[i1][i2] = 1+f(i1-1,i2-1,text1,text2,dp);
        }
        return dp[i1][i2] =  0 + max(f(i1-1,i2,text1,text2,dp),f(i1,i2-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string s1, string s2) {
          int n=s1.size();
    int m=s2.size();

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i=0;i<=m;i++){
        dp[0][i] = 0;
    }
    
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s1[ind1-1]==s2[ind2-1])
                dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
            else
                dp[ind1][ind2] = 0 + max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
        }
    }
    
    return dp[n][m];
    }
};