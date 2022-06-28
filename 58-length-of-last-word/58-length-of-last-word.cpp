class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> st;
        int count=0;
        for(int i=s.length()-1; i>=0; i--){
             if(s[i]!=' ')count++;
        if(count>0 && s[i]==' '){
            return count;
        }
        }
        
        return count;
    }
};