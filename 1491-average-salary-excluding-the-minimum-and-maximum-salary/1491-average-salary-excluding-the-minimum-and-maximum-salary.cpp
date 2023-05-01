class Solution {
public:
    double average(vector<int>& salary) {
       double sum;
       
       sort(salary.begin(),salary.end());
       for(int i=1; i<salary.size()-1; i++){
         sum += salary[i];
       }
        
        double ans=sum/(salary.size()-2);
        return ans;
    }
};