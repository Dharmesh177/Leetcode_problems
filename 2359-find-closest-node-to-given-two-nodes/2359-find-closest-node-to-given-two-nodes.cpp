class Solution {
public:
    void bfs(int start, vector<int> &edges, vector<int> &dist){
        int n=edges.size();
        queue<int> q;
        q.push(start);
        
        vector<bool> visit(n);
        dist[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            if(visit[node]){
                continue;
            }
            
            visit[node] = true;
            int neighbor = edges[node];
            
            if(neighbor != -1 && !visit[neighbor]){
                dist[neighbor] = 1 + dist[node];
                q.push(neighbor);
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
          vector<int> dist1(n, numeric_limits<int>::max()), dist2(n, numeric_limits<int>::max());

        
         bfs(node1, edges, dist1);
         bfs(node2, edges, dist2);

        
        int minDistNode = -1, minDistTillNow = numeric_limits<int>::max();
        for(int curr=0; curr<n; curr++){
            if(minDistTillNow > max(dist1[curr],dist2[curr])){
                minDistNode = curr;
                minDistTillNow = max(dist1[curr],dist2[curr]);
            }
        }
        return minDistNode;
    }
};

// breadth-first search (BFS) is a good algorithm to use if we want to find the shortest path in an unweighted graph.