class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
         int n = grid.size(), m = grid[0].size();
        for(auto &x : grid) sort(x.begin(), x.end());
        
        int ans = 0;
        for(int i = 0; i < m; i++) {
            int maxi = INT_MIN;
            
            for(int j = 0; j < n; j++) 
                maxi = max(maxi, grid[j][i]);

            ans += maxi;
        }
        
        return ans;
    }
};