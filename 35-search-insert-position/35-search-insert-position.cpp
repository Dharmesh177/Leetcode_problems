class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
           int ans = -1;
        
        int lo = 0;
        int hi = nums.size()-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            
            if(nums[mid] == target){
                return mid;
            } 
            
            if(nums[mid] < target){
                ans = mid + 1;
                lo = mid + 1;
            }
            
            else if(nums[mid] > target){
                ans = mid;
                hi = mid - 1;
            }
        }
        
        return ans;
    }
};