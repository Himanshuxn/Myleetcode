class Solution {
public:
    int searcht(vector<int>& nums, int target,int l,int r) {
        int ans;
        while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
        ans = mid;
        return ans;
        }
        else if(target>nums[mid])
        return searcht(nums,target,mid+1,r);
        else
        return searcht(nums,target,l,mid-1);
        
    }
    return -1;
    }
public:
    int search(vector<int>& nums, int target) {
       int l=0;
       int r=nums.size()-1;
       return searcht(nums,target,l,r);
        
    }
};