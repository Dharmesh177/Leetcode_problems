class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
           
          map<int,int> m;
        vector<int >ans;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        //make minheap of map
        priority_queue<pair<int,int>> q;
        for(auto [a,b] : m){
            
                 q.push({b,a});
           
           
        }
        
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};