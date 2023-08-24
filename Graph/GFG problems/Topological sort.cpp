//DFS
class Solution
{
    private:
    void dfs(int node,stack<int>&st,vector<bool>&vis,vector<int> adj[]){
        vis[node]=1;
        for(auto child:adj[node]){
            if(!vis[child]){
                dfs(child,st,vis,adj);
            }
           
        } 
        st.push(node);
    }
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>vis(V,0);
	    stack<int>st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,st,vis,adj);
	        }
	    }
	   vector<int>ans;
	   while(!st.empty()){
	       ans.push_back(st.top());
	       st.pop();
	   }
	    return ans;
	}
};

//BFS
class Solution
{
    
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>in(V);
	    queue<int>q;
	     for(int i=0;i<V;i++){
	        for(auto it:adj[i])in[it]++;
	    }
	    for(int i=0;i<V;i++){
	        if(!in[i])q.push(i);
	    }
	   vector<int>ans;
	   while(!q.empty()){
	      int x=q.front();
	      q.pop();
	      ans.push_back(x);
	      for(auto it:adj[x]){
	          in[it]--;
	         if(!in[it])q.push(it);
	      }
	   }
	    return ans;
	}
};