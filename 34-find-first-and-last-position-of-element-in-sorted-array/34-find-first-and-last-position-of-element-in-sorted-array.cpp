class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        int i=0;
        int j=nums.size()-1;
        vector<int> ans;
      int left=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
               left=mid;
                j=mid-1;
                
            }else if(nums[mid]>target){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        ans.push_back(left);
        int right=-1;
        i=0;
  j=nums.size()-1;
        while(i<=j){
            
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
               right=mid;
               i=mid+1;
                
            }else if(nums[mid]>target){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        ans.push_back(right);
        return ans;
    }
};