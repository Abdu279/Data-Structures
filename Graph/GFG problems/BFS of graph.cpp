class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        vis[0]=1;
        queue<int>next;
        next.push(0);
        vector<int>ans;
        while(!next.empty())
        {
            int node=next.front();
            next.pop();
            ans.push_back(node);
            for(auto child:adj[node])
            {
                if(!vis[child]){
                    vis[child]=1;
                    next.push(child);
                }
            }
        }
        return ans;
    } 
   
};
