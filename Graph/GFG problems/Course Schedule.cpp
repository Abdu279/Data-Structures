//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int N, int m, vector<vector<int>> pre) 
    {
       vector<int>in(N,0);
	   vector<vector<int>>adj(N);
	   for(int i=0;i<m;i++){
	       adj[pre[i][1]].push_back(pre[i][0]);
	       in[pre[i][0]]++;
	   }
	   queue<int>q;
	   for(int i=0;i<N;i++){
	       if(in[i]==0)q.push(i);
	   }
	   //return in[1]==1;
	   vector<int>ans;
	   while(!q.empty())
	   {
	       int x= q.front();
	       ans.push_back(x);
	       q.pop();
	       for(auto it:adj[x]){
	           in[it]--;
	           if(!in[it])q.push(it);
	       }
	   }
	   
	   if(ans.size()==N)return ans;
	   return {};
    }
};