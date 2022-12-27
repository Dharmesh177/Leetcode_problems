class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int p) {
       vector<int> ans(capacity.size());
       for(int i=0; i<capacity.size(); i++){
           ans[i]=capacity[i]-rocks[i];
       }
        int count=0;
        sort(ans.begin(),ans.end());
        for(auto x:ans){
            if(x==0){
                count++;
            }else if(p-x>=0){
                p-=x;
                count++;
            }
        }
        return count;
    }
};