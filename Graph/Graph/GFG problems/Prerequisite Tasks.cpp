class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& pre) {
	   vector<int>in(N,0);
	   vector<vector<int>>adj(N);
	   for(auto it:pre){
	       adj[it.first].push_back(it.second);
	   }
	   for(int i=0;i<N;i++){
	       for(auto it:adj[i])in[it]++;
	   }
	   queue<int>q;
	   for(int i=0;i<N;i++){
	       if(in[i]==0)q.push(i);
	   }
	   //return in[1]==1;
	   int cnt=0;
	   while(!q.empty())
	   {
	       int x= q.front();
	       cnt++;
	       q.pop();
	       for(auto it:adj[x]){
	           in[it]--;
	           if(!in[it])q.push(it);
	       }
	   }
	   
	   return cnt==N;
	}
};