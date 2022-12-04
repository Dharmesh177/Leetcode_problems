class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> v;
        map<int,int> mp;
         
        for(auto i:matches){
            mp[i[0]]+=0;
            mp[i[1]]+=1;
        }
        vector<int> ans0;
        vector<int> ans1;
        for(auto i:mp){
          if(i.second==0){
              ans0.push_back(i.first);
          }else if(i.second==1){
              ans1.push_back(i.first);
          }
        }
        sort(ans0.begin(),ans0.end());
        sort(ans1.begin(),ans1.end());
        v.push_back(ans0);
        v.push_back(ans1);
        return v;


    }
};
