class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
        vector<int> ans1;
        vector<int> ans2;
        vector<vector<int>> ans;
        map<int ,int> m;
        for(int i=0; i<a.size(); i++){
            m[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
          
         if(m[b[i]]==0 && !(find(ans2.begin(), ans2.end(), b[i]) != ans2.end())){
                ans2.push_back(b[i]);
         }
        }
        map<int ,int> mm;
        for(int i=0; i<b.size(); i++){
            mm[b[i]]++;
        }
        for(int i=0; i<a.size(); i++){
          
         if(mm[a[i]]==0 && !(find(ans1.begin(), ans1.end(), a[i]) != ans1.end())){
                ans1.push_back(a[i]);
         }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        
        
        return ans;
        
    }
};