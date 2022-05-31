class Solution {
public:
    bool isValid(string s) {
     unordered_map<char,int> sym;
    stack<int> st;
    sym['('] = 1; sym[')'] = -1;
    sym['{'] = 2; sym['}'] = -2;
    sym['['] = 3; sym[']'] = -3;
    int n = s.length();
    for(int i = 0 ;i<n;i++)
    {
      if(!st.empty() && st.top()+sym[s[i]]==0)
      {
          st.pop();
      }
    else{
        if(sym[s[i]]<0)
        return false;
        st.push(sym[s[i]]);
    }
    }
    if(st.empty())
        return true;
    else
        return false;
    }
};