// User function Template for C++

class Solution {
  private:
    void bfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& vis, set<vector<pair<int,int>>>&st)
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<pair<int,int>>vec;
        queue<pair<int,int>>q;
        q.push({i,j});
        vec.push_back({0,0});
        vis[i][j]=true;
        vector<pair<int,int>>v={{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty())
        {
            int x=q.front().first,y=q.front().second;
            
            q.pop();
            for(int k=0;k<4;k++)
            {
                int a=v[k].first+x,b=v[k].second+y;
                if(a<n&&a>=0&&b<m&&b>=0&&!vis[a][b]&&grid[a][b]==1)
                {
                    vis[a][b]=true;
                    q.push({a,b});
                    vec.push_back({a-i,b-j});
                }
            }
        }
        st.insert(vec);
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m));
        set<vector<pair<int,int>>>st;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1){
                    bfs(i,j,grid,vis,st);
                }
            }
        }
        return st.size();
    }
};