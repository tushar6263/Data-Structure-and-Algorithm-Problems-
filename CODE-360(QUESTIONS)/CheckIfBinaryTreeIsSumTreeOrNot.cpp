//Question Link:-https://www.naukri.com/code360/problems/check-if-binary-tree-is-sum-tree-or-not_1164404

//Solution:-
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/* pair<bool, int> isSumTreeFast(TreeNode<int> *root) {
    if (root == NULL) {
        return {true, 0};
    }

    // Leaf node
    if (root->left == NULL && root->right == NULL) {
        return {true, root->val};
    }

    pair<bool, int> leftAns = isSumTreeFast(root->left);
    pair<bool, int> rightAns = isSumTreeFast(root->right);

    bool isLeftSumTree = leftAns.first;
    bool isRightSumTree = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;

    bool condn = root->val == (leftSum + rightSum);

    pair<bool, int> ans;
    if (isLeftSumTree && isRightSumTree && condn) {
        ans.first = true;
        ans.second = root->val + leftSum + rightSum;
    } else {
        ans.first = false;
    }

    return ans;
}

bool isSumTree(TreeNode<int> *root) {
    return isSumTreeFast(root).first;
}
*/