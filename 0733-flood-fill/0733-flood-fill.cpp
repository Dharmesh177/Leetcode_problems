class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int iniColor,int drow[],int dcol[],vector<vector<int>>& ans){
        ans[sr][sc] = color;
        
        int n=image.size();
        int m=image[0].size();
        
        for(int i=0; i<4; i++){
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];
            
            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m &&
              ans[nrow][ncol]!=color && image[nrow][ncol]==iniColor){
                dfs(image,nrow,ncol,color,iniColor,drow,dcol,ans);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int iniColor = image[sr][sc];
        
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        
        dfs(image,sr,sc,color,iniColor,drow,dcol,ans);
        return ans;
    }
};