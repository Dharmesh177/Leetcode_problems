class Solution {
public:
    void getcordinate(int n,int s,int &r,int &c){
        r = (n-1)-(s-1)/n;
        c = (s-1)%n;
        if((n%2==0 && r%2==0) || (r%2==1 && n%2==1)){
            c=(n-1)-c;
        }
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<bool> visited(n*n+1,false);
        visited[1]=0;
        queue<pair<int,int>> q;
        q.push({1,0});
        while(!q.empty()){
            pair<int,int> p=q.front();q.pop();
            int r,c,s=p.first,dist=p.second;
            if(s==n*n) return dist;
            for(int i=1; i<=6 && s+i<=n*n; i++){
                getcordinate(n,s+i,r,c);
                int sfinal=board[r][c]==-1?s+i:board[r][c];
                
                if(visited[sfinal]==false){
                    visited[sfinal]=true;
                    q.push({sfinal,dist+1});
                }
            }
        }
        return -1;
    }
};



