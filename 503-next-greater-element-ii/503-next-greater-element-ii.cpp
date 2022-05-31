class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     int n = nums.size();
     nums.resize(2*n);
     stack<int> st;
    vector<int> res(n,-1);
        for(int i =n;i<2*n;i++)
        {
            nums[i]=nums[i-n];
        }
    for(int i = 0 ; i<2*n ; i++)
    {
      int element = nums[i];
        while(!st.empty() && element>nums[st.top()])
        {
          if(st.top()>=n)
         st.top()=st.top()-n;
            res[st.top()]=element;
            st.pop();
        } 
      st.push(i);  
    }
        return res;
    }
};