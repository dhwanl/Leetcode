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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        /*
            related topics
            Tree
            Depth-first search
            Breadth-First Search
            Binary Tree
        */
        // recursion with two base cases
        if(root1 == NULL) return root2;
        if(root2 == NULL) return root1;
        
        // new node to keep new value
        TreeNode* root3 = new TreeNode(root1->val + root2->val);
        
        // call function
        root3->left = mergeTrees(root1->left, root2 -> left);
        root3->right = mergeTrees(root1->right, root2 -> right);
        
        return root3;
        
    }
};