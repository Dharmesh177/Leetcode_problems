class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        int i=0,j=0;
        map<int,int> m;
        for(int i=0; i<a.size(); i++){
            m[a[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<b.size(); i++){
            if(m[b[i]]>=1 && !(find(ans.begin(), ans.end(), b[i]) != ans.end())){
                ans.push_back(b[i]);
            }
        }
        
        return ans;
        
        
    }
};