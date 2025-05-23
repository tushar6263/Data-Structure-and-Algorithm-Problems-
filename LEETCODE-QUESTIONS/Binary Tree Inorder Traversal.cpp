//Question Link:-https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

//Solution:-
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
 class Solution {
    public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* curr = root;
        while(curr != nullptr){
            if(curr->left == nullptr){
                res.push_back(curr->val);
                curr = curr->right;
            }
            else{
               TreeNode* prev = curr->left;
               while (prev->right != nullptr &&  prev->right != curr) {
                prev = prev->right;
            }
            if(prev->right == nullptr){
                prev->right =  curr;
                curr = curr->left;
            }
            else{
                 prev->right = nullptr;
                res.push_back(curr->val);
                curr = curr->right;
            }
            }
        
        }
        return res;
    }
};
            */