class Solution {
    private: 
    void dfs(int node,bool vis[],vector<vector<int>>v)
    {
        vis[node]=true;
        for(auto child:v[node])
        {
            if(!vis[child]){
            dfs(child,vis,v);
            }
        }
    }
    
    
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<vector<int>>v(V);
        for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
        {
            if(adj[i][j]==1&&i!=j){
                v[i].push_back(j);
                v[j].push_back(i);
            }
        }
    }
      bool vis[V]={false};
      int cnt=0;
     for(int i=0;i<V;i++)
     {
         if(!vis[i]){
             cnt++;
             dfs(i,vis,v);
         }
     }
     return cnt;
    }
};