class Solution {
public:

   bool arePair(char x,char y)
   {
       if(x=='('&&y==')')
           return true;
       if(x=='{'&&y=='}')
           return true;
       if(x=='['&&y==']')
           return true;
      return false;
   } 
    bool isValid(string s) {
        int n= s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(st.empty()||!arePair(st.top(),s[i])){
                    return false;
                }
                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
        
    }
};
