class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        stack<char>st;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(!st.empty()){
                    ans+=s[i];
                }
                st.push(s[i]);
            }
            else if(s[i]==')'){
                st.pop();
                if(!st.empty()){
                    
                    ans+=s[i]);
                }
            }
        }
        return ans;
           

    }
};
