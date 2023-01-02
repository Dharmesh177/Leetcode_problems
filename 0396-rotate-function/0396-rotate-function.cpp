class Solution {
public:
    
    int maxRotateFunction(vector<int>& nums) {
       int n=nums.size();
       vector<int> dp(n,0);
       int f0=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            f0+=i*nums[i];
        }
        // sum -= nums[n-k]*n;
        dp[0]=f0;
        int maxi=dp[0];
        
        for(int i=1; i<n; i++){
            dp [i] = dp [i-1] + sum -n * nums [n - i];
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};