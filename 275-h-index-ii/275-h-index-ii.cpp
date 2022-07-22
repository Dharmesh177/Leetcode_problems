class Solution {
public:
    int hIndex(vector<int>& citations) {
        // int l=0;
        // int r=citations.size()-1;
        // int mid;
        // int ans=0;
        // int n=citations.size();
        // while(l<=r){
        //     mid=l+(r-l)/2;
        //     if(citations[mid]==n-mid){
        //         return citations[mid];
        //     }else if(citations[mid]>n-mid){
        //         r=mid-1;
        //     }
        //     else{
        //         l=mid+1;
        //     }
        // }
        // return n-r+1;
             int left=0, len = citations.size(), right= len-1,  mid;
        while(left<=right)
        {
            mid=(left+right)>>1;
            if(citations[mid]== (len-mid)) return citations[mid];
            else if(citations[mid] > (len-mid)) right = mid - 1;
            else left = mid + 1;
        }
        return len - (right+1);
    }
};