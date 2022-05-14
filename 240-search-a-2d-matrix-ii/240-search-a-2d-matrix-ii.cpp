class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int r = 0;
      int c = matrix[0].size()-1;
      int m = matrix.size();
      int n = matrix[0].size();
      while(r<m && c>=0)
      {
          if(target == matrix[r][c])
          {
              return true;
          }
          target<matrix[r][c]?c--:r++;
      }
        return false;
    }
};