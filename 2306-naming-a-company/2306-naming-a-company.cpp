class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
         long long ans=0;
       int len=ideas.size();
       int  cnt[26][26]={0};
       unordered_set<string> Set;
       for(int j=0;j<len;j++)
       {

           Set.insert(ideas[j]);
       }
       for(int j=0;j<len;j++){
           string s= ideas[j];
           int st=s[0] -'a';
           
           for(int i=0;i<26;i++)
           {
              s[0]=i+'a';
             if (Set.find(s)==Set.end())
             {
                   cnt[st][i]++;  
                   ans+=cnt[i][st];
               }
           }
       }
     
       return ans*2;
    }
};