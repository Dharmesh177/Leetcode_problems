class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1){
            return;
        }
        int index1,index2;
        int vv=0;
        //step 1. find breaking index from front
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                vv=1;
                break;
            }
        }
        if(vv==0){
            sort(nums.begin(),nums.end());
            return;
        }
        //step 2. finding index greater than breaking index
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        
        //step 3 swap both index element
        swap(nums[index1],nums[index2]);
        
        //step 4. reverce all element from index + 1
        reverse(nums.begin()+index1+1,nums.end());
    }
};