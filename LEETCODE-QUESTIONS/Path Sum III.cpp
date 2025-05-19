//Question Link:-https://leetcode.com/problems/path-sum-iii/description/

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
    void solve(TreeNode* root, int targetSum, int &count, vector<int>& path) {
        if (!root) return;
        
        // Add current node to path
        path.push_back(root->val);
        
        // Check for target sum in reverse path
        long long sum = 0; // use long long to prevent int overflow
        for (int i = path.size() - 1; i >= 0; --i) {
            sum += path[i];
            if (sum == targetSum) {
                count++;
            }
        }
        
        // Recurse to children
        solve(root->left, targetSum, count, path);
        solve(root->right, targetSum, count, path);
        
        // Backtrack
        path.pop_back();
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0; // defensive check
        vector<int> path;
        int count = 0;
        solve(root, targetSum, count, path);
        return count;
    }
};

*/