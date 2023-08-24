class Solution {
  private:
    bool is_Valid(vector<int>adj[],int start,bool vis[],int pre)
    {
        vis[start]=true;
        for(auto child:adj[start])
        {
            if(!vis[child]){
            if(is_Valid(adj,child,vis,start)) return true;
            
        } 
        else if(child!=pre)return true;
        }
        return false;
    }
    
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        bool vis[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
             if(is_Valid(adj,i,vis,-1))return true;
        }
        return false;
    }
};