class Solution {
    private:
    void bfs(int x,int y, vector<vector<bool>>& vis,vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
         queue<pair<int,int>>next;
         next.push({x,y});
         while(!next.empty())
         {
             int a=next.front().first,b=next.front().second;
             next.pop();
             vector<pair<int,int>>v={{a-1,b-1},{a-1,b},{a-1,b+1},{a,b-1},{a,b+1},{a+1,b-1},{a+1,b},{a+1,b+1}};
             
             for(int i=0;i<8;i++)
             {
                 int x1=v[i].first,y1=v[i].second;
                 if(x1<n&&x1>=0&&y1<m&&y1>=0&&!vis[x1][y1]&&grid[x1][y1]=='1')
                 {
                         next.push({x1,y1});
                         vis[x1][y1]=true;
                 }
             }
         }
        
    }
    
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>((m),false));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                cnt++;
                bfs(i,j,vis,grid);
                }
            }
        }
       
        return cnt;
    }
};