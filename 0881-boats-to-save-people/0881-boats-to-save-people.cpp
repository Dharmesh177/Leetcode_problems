class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0, j=people.size()-1;
        int count=0;
        sort(people.begin(),people.end());
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
            }
                count++;
            j--;
         
        }
        return count;
    }
};