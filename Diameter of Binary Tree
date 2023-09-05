class Solution {
public:
    int maxDia(TreeNode* root, int& d) {
        if (!root)
            return 0;

        int left = maxDia(root->left, d);
        int right = maxDia(root->right, d);
        d = max(d, left + right);
            
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

        int d = 0;
        maxDia(root, d);
        return d;
    }
};
