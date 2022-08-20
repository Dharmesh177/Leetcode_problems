class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        stations.push_back({target,0});
        int n=stations.size();
        int ans=0;
        for(int i=0; i<n; i++){
            if(startFuel>=stations[i][0]){
                pq.push(stations[i][1]);
            }else{
                while(startFuel<stations[i][0] && !pq.empty()){
                    ans++;
                    startFuel+=pq.top();
                    // cout<<"refuling : "<<pq.top()<<endl; 
                    pq.pop();
                }
                if(startFuel<stations[i][0]) return -1;
                else pq.push(stations[i][1]);
            }
        }
        return ans;

    }
};