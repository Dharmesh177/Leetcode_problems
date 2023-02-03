class Solution {
public:
    string convert(string s, int num) {
        if(num==1) return s;
        
        string ans;
        int n=s.size();
        int charsInSection=2*num-2;
        
        for(int currrow=0; currrow<num; currrow++){
            int idx = currrow;
            
            while(idx<n){
                ans+=s[idx];
                
                if(currrow != 0 && currrow!=num-1){
                     int charsInBetween = charsInSection - 2 * currrow;
                    int secondIndex = idx + charsInBetween;
                    
                    if (secondIndex < n) {
                        ans += s[secondIndex];
                    }
                }
                idx+=charsInSection;
            }
        }
        return ans;
    }
};