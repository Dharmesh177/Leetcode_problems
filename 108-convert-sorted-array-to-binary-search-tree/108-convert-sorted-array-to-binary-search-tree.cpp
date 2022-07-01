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
    TreeNode* arrToBST(vector<int>& nums,int s,int e){
        if(e<=s){return NULL;}
        int mid=(s+e)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=arrToBST(nums,s,mid);
        root->right=arrToBST(nums,mid+1,e);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return arrToBST(nums,0,nums.size());
    }
    
    
};