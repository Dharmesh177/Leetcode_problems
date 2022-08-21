class Solution {
public:
  bool isValid(string &t , string &s , int pos , vector<bool> &vis)
    {
        if(vis[pos])  return false ;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(t[i+pos] != '?' && t[i+pos] != s[i])  return false ;
        }
        return true ;
    }
    
    vector<int> movesToStamp(string stamp, string tar) {
        
        string t=tar , s=stamp ;
        int ct=0 , n=t.size() , len=s.size() ;
        vector<bool> vis(t.size() , false) ;
        
        vector<int> ans ;
        
        while(ct != t.size())
        {
            bool changeOrNot = false ;
            for(int i=0 ; i<=n-len ; i++)
            {
                if( isValid(t , s , i , vis) )  
                {
                    for(int j=0 ; j<s.size() ; j++)  
                    {
                        if(t[j+i] != '?')   t[j+i] = '?' , ct++ ;
                    }
                    vis[i] = true ;
                    changeOrNot = true ;
                    ans.push_back(i) ;
                    
                    if(ct == n)  break ;
                }
            }
            if( !changeOrNot)   return {} ;
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};