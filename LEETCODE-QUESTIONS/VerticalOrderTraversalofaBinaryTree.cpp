//Question Link:-https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
        vector<vector<int>> verticalTraversal(TreeNode* root) {
             map<int, map<int, vector<int>>> nodes;
            queue<pair<TreeNode*, pair<int, int>>> q;
            vector<vector<int>> ans;
    
            if (root == nullptr) {
                return ans;
            }
    
            q.push({root, {0, 0}});
    
            while (!q.empty()) {
                auto temp = q.front();
                q.pop();
                TreeNode* frontNode = temp.first;
                int hd = temp.second.first;
                int lvl = temp.second.second;
    
                nodes[hd][lvl].push_back(frontNode->val);
    
                if (frontNode->left)
                    q.push({frontNode->left, {hd - 1, lvl + 1}});
    
                if (frontNode->right)
                    q.push({frontNode->right, {hd + 1, lvl + 1}});  // Fixed hd here too
            }
    
            for (auto& i : nodes) {
                vector<int> col;
                for (auto& j : i.second) {
                    sort(j.second.begin(), j.second.end());  // Optional: sort if needed
                    col.insert(col.end(), j.second.begin(), j.second.end());
                }
                ans.push_back(col);
            }
    
            return ans;
        }
    };*/