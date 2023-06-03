class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& in) {
        vector<int> adj[n];
        int ans =0;
        for(int i=0; i<n; i++){
            if(manager[i] != -1){
                adj[manager[i]].push_back(i);
            }
        }
        
        queue<pair<int,int>> q;
        q.push({headID, in[headID]} );
                
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int node = it.first;
            int time = it.second;
            
            for(auto it:adj[node]){
                if(in[it] == 0){
                    ans = max(ans,time);
                }else{
                    q.push({it,time + in[it]});
                }
            }
        }
                return ans;
    }
};