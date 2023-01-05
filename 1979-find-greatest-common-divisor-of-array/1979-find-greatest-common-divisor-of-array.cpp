class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi = INT_MIN;
        for(auto x:nums){
            mini = min(mini,x);
            maxi=max(maxi,x);
        }
        return __gcd(mini,maxi);
    }
    
    
};