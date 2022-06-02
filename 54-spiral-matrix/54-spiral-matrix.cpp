class Solution {
public:
     vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int m = matrix.size();
     int n = matrix[0].size();
     vector<int> v;
     int top = 0;
     int left = 0;
     int right = n-1;
     int buttom = m-1;
    int dir = 1;
     while(top<=buttom && right>=left)
     {
        if(dir==1)
        {for(int i =left ;i<=right;i++)
         {
          v.push_back(matrix[top][i]);
         
         }
          top++;
         dir=2;
        }
        else if(dir==2)
         {
         for(int i =top ;i<=buttom;i++)
         {
          v.push_back(matrix[i][right]);
          
         }
         right--;
             dir=3;
         }
        else if(dir==3)
         {
         for(int i =right ;i>=left;i--)
         {
          v.push_back(matrix[buttom][i]);
          
         }
         buttom--;
             dir=4;
         }
        else if(dir==4)
         {
         for(int i =buttom ;i>=top;i--)
         {
          v.push_back(matrix[i][left]);
          
         }
         left++;
        dir=1;
         }
     }
        return v;
    }
};