// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        vector<vector<char>>ans(n,vector<char>(m,'0'));
         queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            if(mat[0][i]=='O'&&!vis[0][i]){
                q.push({0,i});
                vis[0][i]=true;
            }
            if(mat[n-1][i]=='O'&&!vis[n-1][i]){
                q.push({n-1,i});
                vis[n-1][i]=true;
            }
        }
        for(int i=0;i<n;i++){
            if(mat[i][m-1]=='O'&&!vis[i][m-1]){
                q.push({i,m-1});
                vis[i][m-1]=true;
            }
            if(mat[i][0]=='O'&&!vis[i][0]){
            q.push({i,0});
            vis[i][0]=true;
            }
        }
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
         while(!q.empty())
       {
           int x=q.front().first;
           int y=q.front().second;
           q.pop();
           ans[x][y]='X';
            for(int i=0;i<4;i++){
	               int a=v[i].first+x,b=v[i].second+y;
	               if(a<n&&a>=0&&b<m&&b>=0&&!vis[a][b]&&mat[a][b]=='O'){
	                   vis[a][b]=true;
	                   q.push({a,b});
	               }
	           }
       }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]=='0'){
                    if(!vis[i][j])ans[i][j]='X';
                }
                else ans[i][j]='O';
            }
        }
        return ans;
        
        
    }
};