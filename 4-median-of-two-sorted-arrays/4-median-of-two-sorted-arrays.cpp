#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
       vector<int> arr3(arr1.size()+arr2.size());
        merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());
        int n=arr3.size();
        if(n%2==0){
           double dd =(double)((arr3[n/2]+arr3[n/2-1])/(double)2);
            return dd;
        }else{
            double dd =arr3[n/2];
            return dd;
        }
    }
};