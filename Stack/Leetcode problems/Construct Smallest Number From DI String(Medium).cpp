class Solution {
public:
    string smallestNumber(string s) {
        int n=s.size();
        string ans;
        stack<int>st;
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(s[i]=='I'){
                while(st.empty()==0){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
         while(st.empty()==0){
              ans+=to_string(st.top());
                    st.pop();
                }
        return ans;
    }
};
