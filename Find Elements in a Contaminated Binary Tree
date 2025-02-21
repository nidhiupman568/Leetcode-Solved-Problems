/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
bitset<1048576> hasX = 0; // 2097152=2**21
class FindElements {
public:
    TreeNode* root;

    FindElements(TreeNode* root) { dfs(root, 0); }
    ~FindElements() { hasX = 0; }
    void dfs(TreeNode* root, int x) {
        if (!root)
            return;
        root->val = x;
        hasX[x] = 1;
        dfs(root->left, 2 * x + 1);
        dfs(root->right, 2 * x + 2);
    }

    bool find(int target) { return hasX[target]; }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
