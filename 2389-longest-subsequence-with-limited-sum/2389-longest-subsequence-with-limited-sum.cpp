class Solution {
public:
    int f(vector<int>& nums, int t){
        int l=0,h=nums.size()-1,count=0;
        while(l<=h and t!=0){
            if(t-nums[l]>=0){
                t-=nums[l];
                l++;
            }else if(t-nums[h]>=0){
                t-=nums[h];
                h--;
            }else{
                return count;
            }
            count++;
        }
        return count;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
         sort(nums.begin(),nums.end());
        vector<int>ans(q.size());
        
        for(int i=0;i<q.size();i++){
            ans[i]=f(nums,q[i]);
        }
        
        return ans;
        
    }
};