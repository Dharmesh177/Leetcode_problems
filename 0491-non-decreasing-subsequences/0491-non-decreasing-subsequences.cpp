class Solution {
public:
    void backtrack(vector<int>& nums, int i,
               vector<vector<int> >& resultset,
               vector<int> curr_set)
{
        if(i==nums.size()){
        if(curr_set.size()>=2){
                resultset.push_back(curr_set);
        }
            return;
        }
        
        if(curr_set.empty() || curr_set.back() <= nums[i]){
            // append nums[index] to the sequence
            curr_set.push_back(nums[i]);
            
             // call recursively
            backtrack(nums, i + 1, resultset,
                  curr_set);
            
            // delete nums[index] from the end of the sequence
            curr_set.pop_back();
            
        }

          // call recursively not appending an element
        backtrack(nums, i + 1, resultset,
                  curr_set);
}
 
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        
        vector<int> res;
        // sort(nums.begin(),nums.end());
        backtrack(nums,0,ans,res);
        
        set<vector<int>> s;
        for(auto it:ans){
            s.insert(it);
        }
        
        ans.clear();
        
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
        
    }
};