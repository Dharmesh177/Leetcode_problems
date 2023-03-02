class Solution {
public:
    int compress(vector<char>& chars) {
       int count = 1;
        string s;
        int i=0;
        for(i=1; i<chars.size(); i++){
            if(chars[i]==chars[i-1]) {
                count++;
            }
            else{
                if(count>1){
                    s+=(chars[i-1]);
                    s+=to_string(count);
                }
                else{
                    s+=(chars[i-1]);
                }
                count = 1;
            }
        }

        if(count>1){
            s+=(chars[i-1]);
            s+=to_string(count);
        }
        else{
            s+=(chars[i-1]);
        }
        chars.clear();
        for(int i=0; i<s.length(); i++)
            chars.push_back(s[i]);
        return chars.size();
    

    }
};