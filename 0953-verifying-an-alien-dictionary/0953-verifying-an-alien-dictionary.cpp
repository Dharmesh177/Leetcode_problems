class Solution {
public:
     bool check(unordered_map<char, int> mp, string word1, string word2){
        int i=0, j=0;
        // Compare character by character until one of the words runs out of characters
        while(i < word1.size() && j < word2.size()){
            // If word1 has a greater character, return false
            if(mp[word1[i]] > mp[word2[j]]) return false;
            // If word2 has a greater character, return true
            else if(mp[word1[i]] < mp[word2[j]]) return true;
            i++;
            j++;
        }
        // If word1 has run out of characters, return true (word1 is less than or equal to word2)
        // If word2 has run out of characters, return false (word1 is greater than word2)
        return (word1.size() <= word2.size());
    }
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        int pos=0;
        for(auto i:order){
            mp[i]=pos;
            pos++;
        }
        for(int i=0; i<words.size()-1; i++){
            if(!check(mp,words[i],words[i+1])){
                return false;
            }
        }
               return true;
    }
};