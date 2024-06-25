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
	// Reversed inorder recursive function
    void rev(TreeNode* root, int& cnt){
        if(!root) return ;
        rev(root->right, cnt);
		// The root value is continously updated with the help of cnt.
        root->val += cnt;
		// And the count variable is changed so, that the next node in the traversal will be updated.
        cnt = root->val;
        rev(root->left, cnt);
    }
    TreeNode* bstToGst(TreeNode* root) {
		// this consists of the answer for each node.
		int cnt = 0;
        rev(root, cnt);
        return root;
    }
};
