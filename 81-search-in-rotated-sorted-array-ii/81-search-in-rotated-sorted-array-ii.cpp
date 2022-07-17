class Solution {
public:
    bool search(vector<int>& a, int target) {
         int i=0;
        int j=a.size()-1;
        int mid=0;;
       
        while(i<=j){
            mid=i+(j-i)/2;
            if(a[mid]==target){
                return true;
            }
            if(a[mid]==a[i] && a[mid]==a[j]){
                i++;
                j--;
            }else 
            if(a[i]<=a[mid]){ //you should take = also
                if(target<=a[mid] && target >=a[i]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }
            }else{
                 if(target>=a[mid] && target <=a[j]){
                   i=mid+1;
                }else{
                   j=mid-1; 
                }
            }
        }
        return false;
    }
};