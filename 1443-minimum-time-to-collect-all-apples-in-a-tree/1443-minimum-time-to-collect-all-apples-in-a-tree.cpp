class Solution {
public:

       int dfs(int node,vector<vector<int>> &adj,vector<bool> &visited,vector<bool> &hasApple){
        visited[node]=1;
        int sum=0;
        for(auto i:adj[node]){
            if(!visited[i]){
                sum+=dfs(i,adj,visited,hasApple);
            }
        }
        if(sum==0){
            if(hasApple[node]){return 2;}
            else{return 0;}
        }
        else{
            return sum+2;
        }
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
                    vector<vector<int>> adj(n);

        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool> visited(n,0);
        int ans=dfs(0,adj,visited,hasApple);
        if(ans==0){return 0;}
        return ans-2;
        
    }
};