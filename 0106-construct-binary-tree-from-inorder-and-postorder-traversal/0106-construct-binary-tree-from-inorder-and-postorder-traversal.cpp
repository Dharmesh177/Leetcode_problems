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
    TreeNode* constructTree(int inSt, int inEnd, vector<int> &inorder,int postSt,int postEnd, vector<int> &postorder,unordered_map<int,int> &mp){
         if(inSt>inEnd || postSt>postEnd)return NULL; //for invalid case
         TreeNode* root = new TreeNode(postorder[postEnd]);
         int rootPos = mp[root->val];  //finding root's position in inorder vector
        
         int leftSubLen = rootPos-inSt; //length of leftsubtree
         //constructing left subtree
        root->left =  constructTree(inSt,rootPos-1,inorder,postSt,postSt+leftSubLen-1,postorder,mp);
        //constructing right subtree
        root->right = constructTree(rootPos+1,inEnd,inorder,postSt+leftSubLen,postEnd-1,postorder,mp); 
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int m=postorder.size();
        
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            mp[inorder[i]] = i;
        }
        //Defining subtree's starting and ending position in both the array
        int inSt = 0, inEnd = n-1, postSt = 0, postEnd = m-1;
        return constructTree(inSt,inEnd,inorder,postSt,postEnd, postorder,mp);
    }
};