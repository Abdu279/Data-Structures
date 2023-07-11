class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int t=0;
        queue<int> q;
        int n=v.size();
        for(int i=0;i<n;i++) q.push(i);

        while(true)
        {
            if(v[k]==0) break;
            int curr=q.front();
            t++;
            v[curr]--;
            q.pop();
            if(v[curr]!=0) 
            {
                q.push(curr);
            }
        }
        return t;
    }
};
