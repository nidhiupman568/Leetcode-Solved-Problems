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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return help(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
    
    TreeNode* help(vector<int>& preorder, vector<int>& inorder, int pre_start, int pre_end, int in_start, int in_end) {
        int len=pre_end-pre_start+1;
        if(len<=0)  return NULL;
        if(len==1)  return new TreeNode(preorder[pre_start]);
        TreeNode* root = new TreeNode(preorder[pre_start]);
        int index;
        for(index=in_start; index<=in_end; index++){
            if(inorder[index]==preorder[pre_start])   break;
        }
        int left_len=index-in_start;
        int right_len=len-left_len-1;
        root->left = help(preorder, inorder, pre_start+1, pre_start+left_len, in_start, in_start+left_len-1);
        root->right = help(preorder, inorder, pre_end-right_len+1, pre_end, index+1, in_end);
        return root;
    }
};
