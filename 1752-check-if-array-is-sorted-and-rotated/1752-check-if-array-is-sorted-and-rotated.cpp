class Solution {
public:
    bool check(vector<int>& nums) {
       //  int c=0;
       // for(int i=0; i<nums.size()-1; i++){
       //     if(nums[i]>=nums[i+1]){
       //         c++;
       //     }
       // } 
       //  if(c>1){
       //      return false;
       //  }
       //  return true;
         int count = 0;
    int n = nums.size();
    
    for(int i = 1; i<n; i++){
        if(nums[i-1]>nums[i])
            count++;
    }
    
    if(nums[n-1]>nums[0])
        count++;
    return count<=1;
    }
};