class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        int mid=0;
        while(i<j){ //here = not come because when = sitution create then you need to return mid becuase you find your answer
            mid=(i+j)/2;
            if(a[mid+1]>a[mid]){
                i=mid+1;
            }else{
                j=mid;
            }
        }
        return i;
    }
};