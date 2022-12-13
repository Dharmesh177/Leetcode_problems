class Solution {
public:
    int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp){
        if(j<0 || j>=matrix[0].size()) return 1e8;
        if(i==0) return matrix[0][j];
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int u=matrix[i][j]+f(i-1,j,matrix,dp);
        int ld=matrix[i][j]+f(i-1,j-1,matrix,dp);
        int rd = matrix[i][j]+f(i-1,j+1,matrix,dp);
        
        return dp[i][j] = min(u,min(ld,rd));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // vector<vector<int>> dp(n,vector<int>(m,-1));
        // int maxi=1e8;
        // for(int j=0; j<m; j++){
        //     maxi=min(maxi,f(n-1,j,matrix,dp));
        // }
        // return maxi;
        
//          int n = matrix.size();
//     int m = matrix[0].size();
    
//     vector<vector<int>> dp(n,vector<int>(m,0));
    
//     // Initializing first row - base condition
//     for(int j=0; j<m; j++){
//         dp[0][j] = matrix[0][j];
//     }
    
//     for(int i=1; i<n; i++){
//         for(int j=0;j<m;j++){
            
//             int up = matrix[i][j] + dp[i-1][j];
            
//             int leftDiagonal= matrix[i][j];
//             if(j-1>=0) leftDiagonal += dp[i-1][j-1];
//             else leftDiagonal += 1e9;
            
//             int rightDiagonal = matrix[i][j];
//             if(j+1<m) rightDiagonal += dp[i-1][j+1];
//             else rightDiagonal += 1e9;
            
//             dp[i][j] = min(up, min(leftDiagonal,rightDiagonal));
            
//         }
//     }
    
//     int maxi = INT_MAX;
    
//     for(int j=0; j<m;j++){
//         maxi = min(maxi,dp[n-1][j]);
//     }
    
//     return maxi;
        
         
     int n = matrix.size();
    int m = matrix[0].size();
    
    vector<int> prev(m,0), cur(m,0);
    
    // Initializing first row - base condition
    for(int j=0; j<m; j++){
        prev[j] = matrix[0][j];
    }
    
    for(int i=1; i<n; i++){
        for(int j=0;j<m;j++){
            
            int up = matrix[i][j] + prev[j];
            
            int leftDiagonal= matrix[i][j];
            if(j-1>=0) leftDiagonal += prev[j-1];
            else leftDiagonal += 1e9;
            
            int rightDiagonal = matrix[i][j];
            if(j+1<m) rightDiagonal += prev[j+1];
            else rightDiagonal += 1e9;
            
            cur[j] = min(up,min(leftDiagonal,rightDiagonal));
            
        }
        
        prev = cur;
    }
    
    int maxi = INT_MAX;
    
    for(int j=0; j<m;j++){
        maxi = min(maxi,prev[j]);
    }
    
    return maxi;

    }
};