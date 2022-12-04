class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0;
        int c2=0;
        for(int i=0; i<s.length()/2; i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' ||
          s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I'){
              c1++;
          }
        }
        for(int i=s.length()/2; i<s.length(); i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' ||
          s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I'){
              c2++;
          }
        }
        if(c1==c2){
            return true;
        }
        return false;
    }
};