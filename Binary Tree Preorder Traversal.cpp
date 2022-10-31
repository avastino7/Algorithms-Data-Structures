/*

Given the root of a binary tree, return the preorder traversal of its nodes' values.

*/
 class Solution {
public:
    vector<int> ans;
    void preorder(TreeNode* root){
        if (root==NULL)return;
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        // n l r
        preorder(root);
        return ans;
    }
};
