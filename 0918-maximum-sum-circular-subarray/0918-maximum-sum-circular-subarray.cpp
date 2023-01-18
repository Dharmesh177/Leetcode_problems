class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int sum=0;
        int max_sum=INT_MIN;
        int n=nums.size();
        int toc=0,total=0,mini=INT_MAX;
        for(int i=0; i<n; i++){
            sum += nums[i%n];
            total+=nums[i];
            toc+=nums[i];
            max_sum=max(max_sum,sum);
            mini=min(mini,toc);
            if(sum<0){
                sum=0;
            }
            if(toc>0){
                toc=0;
            }
        }
       return (total==mini)?max_sum:max(max_sum,total-mini);  
    }
};