class Solution {
public:

      int dfs(            vector<vector<int>> &adj
,vector<bool>& hasApple,int node,int d,int prev)
    {
        int result=0,temp;
        for(int &i:adj[node])
	    if(i!=prev)
	    {
	        temp=dfs(adj,hasApple,i,d+1,node);
	        if(temp) result+=temp-d;
	    }
        return result||hasApple[node]?result+d:0; 
        
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
                    vector<vector<int>> adj(n);

        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
         return dfs(adj,hasApple,0,0,-1)*2;

        
    }
};