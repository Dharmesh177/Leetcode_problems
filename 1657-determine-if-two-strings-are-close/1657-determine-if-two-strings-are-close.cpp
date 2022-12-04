class Solution {
public:
    bool closeStrings(string word1, string word2) {
         vector<int> v1(26,0);
         vector<int> v2(26,0);
         set<char> s1;
         set<char> s2;
          for(char s: word1){
           v1[s-'a']++;
           s1.insert(s);
        }
        for(char s: word2){
           v2[s-'a']++;
           s2.insert(s);
        }

        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));

        return v1==v2 && s1==s2;
        
    }
};