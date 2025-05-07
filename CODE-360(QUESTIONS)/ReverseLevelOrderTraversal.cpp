//Question Link:-https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/118521

//Solution:-

//#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

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

// vector<int> reverseLevelOrder(TreeNode<int> *root){
//     vector<int> ans;
//   if(root==NULL){
//       return ans;
//   }

//   queue<TreeNode<int> *> q;
//   q.push(root);

//   while (!q.empty()) {
//     auto temp = q.front();
//     q.pop();
//     ans.push_back(temp->val);
//     if (temp->left) {
//       q.push(temp->left);
//     }
//     if (temp->right) {
//       q.push(temp->right);
//     }
//   }
  
//   reverse(ans.begin(), ans.end());

//   return ans;
// }