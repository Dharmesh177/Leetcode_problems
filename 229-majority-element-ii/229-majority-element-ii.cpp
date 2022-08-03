class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          unordered_map<int, int> counter;
        vector<int> v;
        for (int num : nums) {
            if (++counter[num] > nums.size() / 3) {
                v.push_back(num);
            }
        }
        sort(v.begin(), v.end());
vector<int>::iterator it;
it = unique(v.begin(), v.end());  

v.resize(distance(v.begin(),it)); 
        return v;
        
    }
};