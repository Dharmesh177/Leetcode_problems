class Solution {
public:
    int countOdds(int l, int h) {
        // int ans=0;
        // for(int i=low; i<=high; i++){
        //     if(i%2==1) ans++;
        // }
         return ((h + 1) / 2) - (l / 2);
    }
};