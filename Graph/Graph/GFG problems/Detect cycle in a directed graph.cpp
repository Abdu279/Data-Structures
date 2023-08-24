//Using DFS
class Solution {
  private:
   bool dfs(int node,vector<int> adj[],vector<bool>&vis,vector<bool>&pathVis)
   {
       vis[node]=true;
       pathVis[node]=true;
       
       for(auto it:adj[node])
       {
           if(!vis[it]){
           if(dfs(it,adj,vis,pathVis))return true;
         }
         else if(pathVis[it]==true) return true;
      }
       pathVis[node] = false;
       return false;
   }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       vector<bool>vis(V,false);
       vector<bool>pathVis(V,false);
       for(int i=0;i<V;i++){
           if(!vis[i])
           {
               if(dfs(i,adj,vis,pathVis))return true;
           }
       }
       return false;
    }
};

// Using BFS
 class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>in(V);
        for(int i=0;i<V;i++){
            for(auto it:adj[i])in[it]++;
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(!in[i])q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            cnt++;
            for(auto it:adj[x]){
                in[it]--;
                if(!in[it])q.push(it);
            }
        }
       return cnt!=V;
  }
};