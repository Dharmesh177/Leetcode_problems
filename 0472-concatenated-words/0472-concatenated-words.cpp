class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> dict(words.begin(),words.end());
        vector<string> ans;
        
        for(auto word : words){
            int l = word.length();
            vector<bool> dp(l+1);
            dp[0]=true;
            for(int i=1; i<=l; i++){
            for(int j=(i==l?1:0); !dp[i] && j<i; j++){
                dp[i] = dp[j] && dict.count(word.substr(j,i-j));
            }
            }
             if (dp[l]) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};