class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
         int ans = 0, n = points.size();
        unordered_map <long long int, int> numOfPointsAtDist; //number of points at this distance
        
        //for each point, find distance to every other point
        //while finding distance, add buckets of different distances
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == j) continue;
                
                long long int dist = pow((points[i][0] - points[j][0]),2) + pow((points[i][1] - points[j][1]),2);
                numOfPointsAtDist[dist]++;
            }

            //go through these buckets and if there are >=2 points in same distance bucket
            //nC2 is used to find number of ways of adding any 2 points from that bucket
            unordered_map <long long int, int>::iterator it;
            for(it = numOfPointsAtDist.begin(); it != numOfPointsAtDist.end(); ++it)
            {
                int k = it->second;
                if(k < 2) continue;
                else ans += (k * (k-1)); //kC2 is k*(k-1)
            }
            
            //for next point, need fresh buckets
            numOfPointsAtDist.clear();
        }
        
        return ans;
    }
};