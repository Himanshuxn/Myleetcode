class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      for(int i = 0;i<n;i++)
      {
          int t = nums2[i];
          int j;
          for(j = m-1;j>=0;j--)
          {
            if(t>nums1[j])
            {
            nums1[j+1]=t;
            m++;
            break;
            }
              else
              {
               nums1[j+1]=nums1[j];   
              }
          }
          if(j<0)
          {nums1[j+1]=t;m++;}
      }
    }
};