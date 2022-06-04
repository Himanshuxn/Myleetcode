class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      int n = arr.size();
      int diff = INT_MAX;
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
     for(int i = 1 ;i<n;i++)
     {
         diff = min(diff,abs(arr[i]-arr[i-1]));
     }
    for(int i = 1 ;i<n;i++)
     {
       if(diff == abs(arr[i]-arr[i-1]))
       res.push_back({arr[i-1],arr[i]});    
         
     }
        return res;
    }
};