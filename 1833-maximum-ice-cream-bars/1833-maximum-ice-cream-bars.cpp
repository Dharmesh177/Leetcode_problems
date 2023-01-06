class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0;
        
        sort(costs.begin(),costs.end());
        for(auto p : costs){
            if(p<=coins){
                coins-=p;
                ans++;
            }
        }
        
        return ans;
    }
};