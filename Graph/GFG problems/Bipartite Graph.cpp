class Solution {
private:
    bool dfs(vector<int>adj[],int start,int col,vector<int>&color)
    { 
       color[start]=col;
       for(auto child :adj[start]){
           if(color[child]==-1){
               if(!dfs(adj,child,!col,color))return false;
           }
           else if(color[child]==col)return false;
       }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	  vector<int>color(V,-1);
	  for(int i=0;i<V;i++){
	      if(color[i]==-1){
	          if(!dfs(adj,i,0,color))return false;
	      }
	  }
	  return true;
	  
	}

};