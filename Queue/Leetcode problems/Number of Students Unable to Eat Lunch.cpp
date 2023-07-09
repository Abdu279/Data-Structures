class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>q;
        
        int n=students.size();
        for(int i=0;i<n;i++){
            st.push(sandwiches[n-i-1]);
            q.push(students[i]);
        }
        while(!q.empty()){
            int x=0;
            for(int i=0;i<q.size();i++){
            if(q.front()==st.top()){
                q.pop();
                st.pop();
                x=1;
                break;
             }
             else{
                q.push(q.front());
                q.pop();
             }
            }
            if(!x){
               break; 
            }
        }
        return q.size();
    }
};
