class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
         int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i1 = 0, i2 = 0;
        vector<int> res;
        while(i1 < n1 && i2 < n2){
            if(nums1[i1] == nums2[i2]) {
                res.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1] > nums2[i2]){
                i2++;
            }
            else{
                i1++;
            }
        }
        return res;
//         vector<int> ans;
//         int j=0;
//         int k=nums2.size()-1;
//         for(int i=0; i<nums1.size(); i++){
//             while(j<=k){
//                 int mid = (j+k)/2;
//                 if(nums2[mid]==nums1[i]){
//                     ans.push_back(nums1[i]);
//                     break;
//                 }else if(nums2[mid]>nums1[i]){
//                     k=mid-1;
//                 }else{
//                     j=mid+1;
//                 }
//             }
//         }
       
//         return ans;
    }
};