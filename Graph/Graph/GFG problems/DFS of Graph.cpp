class Solution {
    
    private:
    void dfs(int start,vector<int>adj[],int vis[],vector<int>&ans)
    {
        vis[start]=1;
        ans.push_back(start);
        for(auto child:adj[start]){
            if(!vis[child]){
                dfs(child,adj,vis,ans);
            }
        }
    }
    
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        vector<int>ans; 
        dfs(0,adj,vis,ans);
        return ans;
   }
};