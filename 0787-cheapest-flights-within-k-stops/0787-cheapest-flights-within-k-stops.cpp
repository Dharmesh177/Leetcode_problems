class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       
       int m=flights[0].size();
        
        vector<pair<int, int>> adj[n];
        for (auto it : flights)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }
     
       queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});
        vector<int> dist(n,1e9);
        dist[src]=0;
        
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            int stop = x.first;
            int node = x.second.first;
            int dis = x.second.second;
            
            if(stop > k)
                continue;
            for(auto it:adj[node]){
                int dsc = it.first;
                int edW = it.second;
                
                if(dis + edW < dist[dsc] && stop <=k){
                    dist[dsc] = dis + edW;
                    q.push({stop +1,{dsc,dist[dsc]}});
                }
            }
        }
        if (dist[dst] == 1e9)
            return -1;
        return dist[dst];
    }
};