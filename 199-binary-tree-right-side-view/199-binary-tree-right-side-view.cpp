/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   void  rightview(TreeNode* root ,int value,int &maxvalue,vector<int> &res) {
     if(root==NULL)
         return;
    if(maxvalue<value)
    { 
      res.push_back(root->val);
      maxvalue = value ; 
    }
     rightview(root->right , value+1 , maxvalue,res);
     rightview(root->left , value+1 , maxvalue,res);
    }
    vector<int> rightSideView(TreeNode* root) {
      vector<int> res;
      int maxvalue = 0;
    int value = 1;
        rightview(root,value,maxvalue,res);
        return res;
    }
};