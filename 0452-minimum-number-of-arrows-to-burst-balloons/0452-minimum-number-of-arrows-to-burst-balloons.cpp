class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count=1;
        int lastind = points[0][1];
        for(auto it : points){
            if(it[0]>lastind){
                count++;
                lastind=it[1];
            }
            lastind = min(it[1],lastind);
        }
        return count;
    }
};