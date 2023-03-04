class Solution {
public:
   int lcs(string s1, string s2, int m, int n){
        int t[m+1][n+1];
        // Intialization
        for(int i =0; i<=m; i++){
            for(int j=0; j<=n; j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
            }
        }

        // Code

        for(int i =1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] =  1+ t[i-1][j-1];
                }
                else{
                    t[i][j] =  max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }

    int minDistance(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        // No of Deletion
        int Deletion = m-lcs(s1,s2,m,n);


        // No of Insertion
        int insertion = n-lcs(s1,s2,m,n);

        return Deletion + insertion;
        
    }
};