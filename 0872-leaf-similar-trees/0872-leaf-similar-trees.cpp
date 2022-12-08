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
    void leafnodes(TreeNode* root1,vector<int> &lnodes){
        if(root1==NULL){
            return;
        }
        if(root1->left==NULL && root1->right==NULL){
            lnodes.push_back(root1->val);
        }
        leafnodes(root1->left,lnodes);
        leafnodes(root1->right,lnodes);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> l1;
        vector<int> l2;
        
        leafnodes(root1,l1);
        leafnodes(root2,l2);
        if(l1==l2){
            return true;
        }
        return false;
    }
};