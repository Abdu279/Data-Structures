// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            if(grid[n-1][i]==1&&!vis[n-1][i]){
                q.push({n-1,i});
                vis[n-1][i]=true;
            }
            if(grid[0][i]==1&&!vis[0][i]){
                q.push({0,i});
                vis[0][i]=true;
            }
        }
         for(int i=0;i<n;i++)
        {
            if(grid[i][m-1]==1&&!vis[i][m-1]){
                q.push({i,m-1});
                vis[i][m-1]=true;
            }
            if(grid[i][0]==1&&!vis[i][0]){
                q.push({i,0});
                vis[i][0]=true;
            }
        }
        vector<pair<int,int>>v={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty())
        {
            int x=q.front().first,y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int a=v[i].first+x,b=v[i].second+y;
                if(a<n&&a>=0&&b<m&&b>=0&&!vis[a][b]&&grid[a][b]==1)
                {
                    vis[a][b]=true;
                    q.push({a,b});
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1&&!vis[i][j])ans++;
            }
        }
        return ans;
    }
};