class Solution {
public:
    int root[26];
    
    int get(int x){
        return x==root[x] ? x : (root[x]=get(root[x]));
    }
    
    void unite(int x,int y){
        //find root of x
        //find root of y
        //if their roots are not same combine them
        x=get(x);
        y=get(y);
        if(x!=y){
            //smaller element first
            if(x<y) root[y]=x;
            else root[x]=y;
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        string ans="";
        //initially every character has its own group
        for(int i=0; i<26; i++) root[i]=i;
        for(int i=0; i<s1.size(); i++) {
            unite(s1[i]-'a',s2[i]-'a');
        }
        for(auto x:baseStr){
            ans += (char)get(x-'a')+'a';
        }
        return ans;
    }
};