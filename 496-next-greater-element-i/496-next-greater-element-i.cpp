class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int> res(nums1.size(),-1);
      stack<int> st;
      unordered_map<int,int> mm;
     for(int i = 0;i<nums2.size();i++)
     {
         int num = nums2[i];
         while(!st.empty() && st.top()<num)
         {
             mm[st.top()]=num;
             st.pop();
         }
         st.push(num);
     }
    for(int i = 0 ; i<nums1.size() ; i++)
    {
        if(mm.find(nums1[i])!=mm.end())
        {
            res[i] = mm[nums1[i]];
        }
    }
        return res;
    }
};