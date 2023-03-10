class Solution {
public:
    bool timeEnough(vector<int>&time,long long giventime,int t){
        long long actual = 0;
        for(auto i:time){
            actual += giventime/i;
        }
        return actual >= t;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left=1,right=1LL * *max_element(time.begin(),time.end()) * totalTrips;
        
        while(left < right){
            long long mid  = (left + right)/2;
            if(timeEnough(time,mid,totalTrips)){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};