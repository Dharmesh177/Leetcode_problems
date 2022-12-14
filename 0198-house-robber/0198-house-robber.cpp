class Solution {
public:
    // int rob(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int> dp(n,-1);
    //     if(n==1){
    //         return nums[0];
    //     }
    //     // int elast = maxamt(0,n-2,nums,dp);
    //     // fill(dp.begin(),dp.end(),-1);
        
    //     int efirst =  maxamt(0,n-1,nums,dp);
    // //    return max(elast,efirst); 
    // return efirst;       
    // }
    
    // int maxamt(int currInd,int target,vector<int> &nums,vector<int> &dp){
    //     if(currInd == target){
    //         return nums[currInd];
    //     }
    //     if(currInd > target){
    //         return 0;
    //     }
    //     if(dp[currInd]!=-1){
    //         return dp[currInd];
    //     }
    //     int rob=nums[currInd]+maxamt(currInd+2,target,nums,dp);
    //     int notrob =  maxamt(currInd+1,target,nums,dp);
    //     return dp[currInd] = max(rob,notrob);
    // }

    int rob(vector<int> &nums){
        int n=nums.size();
        vector<int> dp(n+1,0);
        dp[n]= 0;
        dp[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            int pick = nums[i]+ dp[i+2];
            int notpick = dp[i+1];
            dp[i]=max(pick,notpick);
        }
        return dp[0];
    }
};