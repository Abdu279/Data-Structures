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