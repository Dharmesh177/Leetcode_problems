class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        for(int i=0; i<a.size(); i++){
            for(int j=i; j<a[0].size(); j++){
                // int temp=a[i][j];
                // a[i][j]=a[j][i];
                // a[j][i]=temp;
                swap(a[i][j],a[j][i]);
            }
        }
        
         for(int i=0; i<a.size(); i++){
           
              reverse(a[i].begin(),a[i].end());
         
        }
     }
};