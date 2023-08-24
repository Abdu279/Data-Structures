class Solution 
{
   
    
    public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m));
        queue< pair< int , int >>qq;
        int mx=0,good=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2){
                   qq.push({i,j});
                    vis[i][j]=true;
                }
                else if(grid[i][j]==1)good++;
            }
        }
        while(!qq.empty())
        {
            int sz=qq.size();
            while(sz--){
            int x=qq.front().first,y=qq.front().second;
            vector<pair<int,int>>v={{x-1,y},{x,y-1},{x,y+1},{x+1,y}};
            qq.pop();
            for(int i=0;i<4;i++)
            {
                int p=v[i].first,q=v[i].second;
                if(p<n&&p>=0&&q<m&&q>=0&&!vis[p][q]&&grid[p][q]==1){
                    vis[p][q]=true;
                    grid[p][q]=2;
                    good--;
                    qq.push({p,q});
                }
            }
        }
         mx++;
        }
        if(mx)mx--;
        if(good)return -1;
        return mx;
    }
};