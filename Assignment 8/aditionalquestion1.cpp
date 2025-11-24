int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        if(root==nullptr) return sum;
        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }
        return sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
}
