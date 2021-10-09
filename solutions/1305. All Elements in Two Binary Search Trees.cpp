/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> result;
    
    void helper(TreeNode* root, vector<int>& arr)
    {
        if(root==NULL)
            return;
        
        helper(root->left, arr);
        arr.push_back(root->val);
        helper(root->right, arr);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        helper(root1, result);
        helper(root2, result);
        
        sort(result.begin(), result.end());
        
        return result;
    }
};
