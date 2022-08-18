class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
    vector<int>ans;
        int sizee=words[0].size()*words.size();
        int mark=words[0].size();
        
        unordered_map<string,int>mp;
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        
         unordered_map<string,int>demo;
        
    for(int i=0;i<s.length()-sizee+1;i++)
        {
            unordered_map<string,int>demo;
            int count=0;
            string str="";
            for(int j=i;j<i+sizee;j++)
            {
                str=str+s[j];
                count++;
                if(count==mark)
                {
                    if(mp.find(str)==mp.end())
                    {
                     break;   
                    }
                    demo[str]++;
                    str="";
                    count=0;
                }
            }
             if(demo==mp)
            {
                ans.push_back(i);
            }
            
        }
        return ans;
        
    }
};