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
     long long mod = 1e9+7;
    long find(TreeNode* root,long long &ans,long long &s){
        if(!root){
            return 0;
        }
        long l=find(root->left,ans,s);
        long r=find(root->right,ans,s);
        long t=root->val + l + r;
        long  curr = (s-t)*t;
        if(ans<curr){
            ans=curr;   
        }
        return t;
    }
    long long sum(TreeNode* root){
        if(!root){
            return 0;
        }
       return root->val+sum(root->left)+sum(root->right);
        
    }
    int maxProduct(TreeNode* root) {
        long long ans=INT_MIN;
       
        long long s=sum(root);
      find(root,ans,s);
        return (ans%mod);
    }
};