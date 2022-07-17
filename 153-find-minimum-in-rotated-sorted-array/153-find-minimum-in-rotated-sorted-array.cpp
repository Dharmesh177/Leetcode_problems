class Solution {
public:
    int findMin(vector<int>& a) {
          int i=0;
        int j=a.size()-1;
        int mid=0;;
       int minn=5001;
        while(i<=j){
            if(a[i]<a[j]){
                minn=min(minn,a[i]);
                break;
            }
            mid=i+(j-i)/2;
            if(a[mid]<=minn){
                minn=a[mid];
            }
            if(a[i]<=a[mid]){ //you should take = also
               
                  
                    i=mid+1;
                
            }else{
                
                   j=mid-1; 
               
            }
        }
        return minn;
    }
};