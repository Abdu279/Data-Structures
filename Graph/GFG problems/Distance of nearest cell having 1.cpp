class Solution 
{
    public:
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	   int n=grid.size();
	   int m=grid[0].size();
	   vector<vector<bool>>vis(n,vector<bool>(m,false));
	   vector<vector<int>>ans(n,vector<int>(m));
	   queue<pair<pair<int,int>,int>>q;
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<m;j++)
	       {
	           if(grid[i][j]==1)
	           {
	               q.push({{i,j},0});
	               vis[i][j]=true;
	           }
	           else vis[i][j]=false;
	       }
	   }
	    vector<pair<int,int>>v={{-1,0},{0,-1},{+1,0},{0,+1}};
	   while(!q.empty())
	   {
	          int x=q.front().first.first;
	          int y=q.front().first.second;
	          int step=q.front().second;
	          q.pop();
	          ans[x][y]=step;
	          
	           for(int i=0;i<4;i++){
	               int a=v[i].first+x,b=v[i].second+y;
	               if(a<n&&a>=0&&b<m&&b>=0&&!vis[a][b]){
	                   vis[a][b]=true;
	                   q.push({{a,b},step+1});
	               }
	           }
	   }
	   
	   return ans;
	}
};