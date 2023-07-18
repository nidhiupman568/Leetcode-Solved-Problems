class Solution {
public:
    int maxDepth(TreeNode* root) {
        return maxDepthUtil(root, 0);
    }
    
    int maxDepthUtil(TreeNode* root, int count) {
        if (root==NULL) return count;
        count++;
        int countLeft = count, countRight = count;
        
        countLeft = maxDepthUtil(root->left, countLeft++);
        countRight = maxDepthUtil(root->right, countRight++);
        return max(countLeft, countRight);
        
    }    
};
