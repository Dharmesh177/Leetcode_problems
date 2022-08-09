class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
          long long int ans=0;
        if(arr.size()==1)
            return 1;
        
        unordered_map<int,long long int>mp;
        for(auto it:arr)
            mp[it]=1;
        
        sort(arr.begin(),arr.end());//we are sorting the array because only the product of two smaller numbers can result in a bigger number.
        
        for(int i=1;i<arr.size();i++)
        {
           long long int count=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    int temp=arr[i]/arr[j];
                    if(mp[temp]!=NULL)
                    {
                        count+=(mp[temp]*mp[arr[j]]);
                    }
                }
            }
            mp[arr[i]]+=count;
        }
        
        for(auto it:mp)
            ans+=it.second;
        
        return ans%1000000007;
    }
};