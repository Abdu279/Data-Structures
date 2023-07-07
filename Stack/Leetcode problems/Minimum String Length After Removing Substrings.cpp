class Solution {
public:
    int minLength(string s) {
         int x=0;
   while(s.size()!=x)
   {
       x=s.size();
       for(int i=0;i<x-1;i++)
       {
        if(s[i]=='A'&&s[i+1]=='B')s.erase(i,2),i++;
        if(s[i]=='C'&&s[i+1]=='D')s.erase(i,2),i++;
       }
   }
   return s.size();
    }
};
