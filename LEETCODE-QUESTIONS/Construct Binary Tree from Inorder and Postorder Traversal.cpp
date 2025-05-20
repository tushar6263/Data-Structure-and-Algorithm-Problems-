//Question Link:-https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/

//Solution:-
/*
class Solution {
public:
    unordered_map<int, int> nodeToIndex;

    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, 
                               int& postIndex, int inStart, int inEnd) {
        if (postIndex < 0 || inStart > inEnd) {
            return nullptr;
        }

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = nodeToIndex[rootVal];

        // Important: build right subtree first because postorder is Left-Right-Root
        root->right = buildTreeHelper(inorder, postorder, postIndex, inIndex + 1, inEnd);
        root->left = buildTreeHelper(inorder, postorder, postIndex, inStart, inIndex - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        for (int i = 0; i < n; i++) {
            nodeToIndex[inorder[i]] = i;
        }

        int postIndex = n - 1;
        return buildTreeHelper(inorder, postorder, postIndex, 0, n - 1);
    }
};
*/
