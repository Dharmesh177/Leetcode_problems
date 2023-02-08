class Solution {
private:
    vector<int> v;
public:
    int helper(vector<int>& nums, int s){
        int ans = INT_MAX;
        if(s == nums.size() - 1) return 0;
        if(v[s] != -1) return v[s];
        for(int i = s + 1; i <= s + nums[s]; i++){
            if(i < nums.size()){
                ans = min(ans + 0LL, helper(nums, i) + 1LL);
            }
        }
        return v[s] = ans;
    }
    int jump(vector<int>& nums) {
        v.resize(1e5 + 1,  -1);
        int ans = helper(nums, 0);
        return ans;
    }
};