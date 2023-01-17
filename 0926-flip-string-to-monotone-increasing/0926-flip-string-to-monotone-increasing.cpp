class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flips=0;
        int ones=0;
        for(char c : s){
            if(c=='1') ones++;
            else if(ones>0){
                flips++;
                ones--;
            }
        }
        return flips;
    }
};