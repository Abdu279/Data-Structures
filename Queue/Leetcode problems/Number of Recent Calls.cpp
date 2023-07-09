class RecentCounter {
    queue<int>q;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        q.push(t);
        int x=t-3000;
        while(q.front()<x )q.pop();
        return q.size();
    }
};
