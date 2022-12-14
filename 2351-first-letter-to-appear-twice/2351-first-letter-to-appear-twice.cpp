class Solution {
public:
    char repeatedCharacter(string s) {
          unordered_set<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(st.find(s[i]) == st.end())
            {
                st.insert(s[i]);
            }else{
                return s[i];
            }   
        }
        return '0';
    }
};