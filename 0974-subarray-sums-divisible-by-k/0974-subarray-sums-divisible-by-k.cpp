class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;

        vector<int> prefix(k,0);
        int temp=0;
        prefix[temp]++;
        for(int i=0; i<n; i++){
          temp = (temp + nums[i]%k + k )%k;
          count += prefix[temp];
          prefix[temp]++;
        }
       

        return count;
    }
};