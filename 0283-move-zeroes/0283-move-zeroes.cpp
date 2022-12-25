class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i=0;
        for(int j=0; j<a.size(); j++){
            if(a[j]!=0){
                swap(a[i],a[j]);
                i++;
            }
        }
    }
};