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
    void inorder (TreeNode* root , vector<int> &ans){
        if(root!= NULL){
            inorder(root->left, ans);
            ans.push_back(root->val);
            inorder(root->right, ans);
        }else{
            ans.push_back(100000);
        }
    }
    void preorder (TreeNode* root , vector<int> &ans){
        if(root!= NULL){
            ans.push_back(root->val);
            preorder(root->left, ans);
            
            preorder(root->right, ans);
        }else{
            ans.push_back(100000);
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector <int> ansp,ansq , inp, inq;
        inorder(p,ansp);
        inorder(q,ansq);
        
        preorder(p,ansp);
        preorder(q,ansq);
        
        if(inp == inq && ansp == ansq)
            return true;
