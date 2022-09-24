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
     vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<int> path;
        findpath(root,target,path);
        return ans;
    }
    
    void findpath(TreeNode* root, int target, vector<int>& path){
        if(root==NULL) return;
        path.push_back(root->val);
        target-=root->val;
        
        if(!root->left && !root->right){
            if(target==0){
                ans.push_back(path);
            }
        }else {
             findpath(root->left,target,path);
             findpath(root->right,target,path);
        }
        path.pop_back(); //for backtracking
    }
};