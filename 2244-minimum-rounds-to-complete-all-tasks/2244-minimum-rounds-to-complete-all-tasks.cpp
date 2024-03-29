class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> m;
        for(auto x : tasks){
            m[x]++;
        }
        int count=0;
        for(auto it : m){
            if(it.second<2){
                return -1;
            }else{
                if(it.second%3==0){
                count += it.second/3;
            }
            else{
                count += it.second/3 + 1;
            }
                
            }
        }
        return count;
    }
};