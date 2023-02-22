class Solution {
public:
    bool possible(vector<int> &weights,int t,int d){
        int days=1,curr=0;
        for(auto w:weights){
            curr+=w;
            if(curr>t){
                days++;
                curr=w;
            }
        }
        return days<=d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int totalWeight=0,maxWeight=0;
        for(auto w : weights){
            totalWeight += w;
            maxWeight = max(maxWeight,w);
        }
        
        int l=maxWeight,r=totalWeight;
        while(l<r){
            int mid = l +(r-l)/2;
            if(possible(weights,mid,days)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};