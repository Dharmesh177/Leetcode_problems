class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
         priority_queue<int> pq;
        int minVal = INT_MAX;
        for(auto x:nums){
            if(x%2==1){
                x*=2;
                pq.push(x);
            }
            else{
                pq.push(x);
            }
             minVal = min(minVal, x);
        }
         int minDeviation = INT_MAX;
        while(true){
             int maxVal = pq.top();
            pq.pop();
            minDeviation = min(minDeviation, maxVal - minVal);
            if(maxVal%2==1) break;
            maxVal = maxVal / 2;
            minVal = min(minVal, maxVal);
            pq.push(maxVal);
        }
        return minDeviation;
    }
};