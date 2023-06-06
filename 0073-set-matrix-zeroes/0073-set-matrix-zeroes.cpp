class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    set<pair<int,int>> mp;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                   mp.insert({i,j});
                }
            }
        }
        
        for(auto it : mp){
            int r =it.first;
            int c = it.second;
            for(int i=0; i<matrix.size(); i++){
                matrix[i][c]=0;
            }
            
            for(int i=0; i<matrix[0].size(); i++){
                matrix[r][i]=0;
            }
        }
    }
};