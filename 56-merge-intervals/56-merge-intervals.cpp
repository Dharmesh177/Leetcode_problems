class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       vector<vector<int> > ans;
       if(a.size()==0){
           return ans;
       }
        
       sort(a.begin(),a.end());
       vector<int> tmp=a[0];
       for(auto it:a){
           if(it[0]<=tmp[1]){
               tmp[1] = max(it[1],tmp[1]);
           }else{
               ans.push_back(tmp);
               tmp=it;
           }
       }
        ans.push_back(tmp);
        return ans;
    }
};