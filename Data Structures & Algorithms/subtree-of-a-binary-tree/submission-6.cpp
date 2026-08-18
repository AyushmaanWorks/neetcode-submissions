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

     bool sameTree(TreeNode* first, TreeNode* second){
        if(first == nullptr && second == nullptr)return true;
        if(first == nullptr || second == nullptr)return false;
        if(first->val != second->val)return false;

        return sameTree(first->left, second->left) && sameTree(first->right, second->right);

        }
     

    bool traverse(TreeNode* root, TreeNode* subRoot){
        if(subRoot == nullptr) return true;
        if(root == nullptr) return false;
        if(sameTree(root, subRoot)) return true;

        return traverse(root->left, subRoot) || traverse(root->right, subRoot);

        
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return traverse(root, subRoot);

    }
};
