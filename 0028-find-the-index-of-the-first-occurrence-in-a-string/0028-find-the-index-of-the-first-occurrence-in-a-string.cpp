class Solution {
public:
    int strStr(string h, string ne) {
      int m=ne.size();
      int n=h.size();
      
        for(int windows_start=0; windows_start<=n-m; windows_start++){
            for(int i=0; i<m; i++){
                if(ne[i] != h[windows_start + i]){
                    break;
                }
                if(i==m-1){
                    return windows_start;
                }
            }
        }
        
        return -1;
        
        
        // int i=0,j=0;
       //  int s=n.size();
       // while(i<h.size() && j<n.size()){
       //     if(j==n.size()) return i;
       //     if(h[j]==n[j]) j++;
       //     else{
       //         i=j+1;
       //         j++;
       //     }
       // }
       //  return -1;
    }
};