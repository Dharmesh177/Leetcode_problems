class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;int n=nums.size();
for(int i = 1; i < n; i++){
    if(nums[i] == nums[i-1]) count++;
    else nums[i-count] = nums[i];
}
return n-count;
       
//         int j=0;
//         
//         for(int i=1; i<n; i++){
//             if(nums[i]==nums[i-1] ){
//               j++;
//            }else{
//                nums[n-j]=nums[i];
               
//            }
//         }
        // while(j<=nums.size()){
        //    if(nums[i]==nums[j] ){
        //        j=j+1;
        //    }else{
        //        nums[n-j]=nums[j];
        //        // j=j+1;
        //        // j++;
        //    }
        // }
        // if(i=0){
        //     return 0;
        // }
    //    nums.erase(nums.end() - j, nums.end());  // add this line!!!
    // return nums.size();
    }
};