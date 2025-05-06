//Question Link:-https://www.naukri.com/code360/problems/count-leaf-nodes_893055

//Solution:-
// void inorder(BinaryTreeNode<int> * root, int &count) {
//     //base case
//     if(root == NULL) {
//         return ;
//     }

//     inorder(root->left, count);
   	
//     //leaf node
//     if(root->left == NULL && root->right == NULL) {
//         count++;
//     }
    
//     inorder(root->right, count);

// }


// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int cnt = 0;
//     inorder(root, cnt);
//     return cnt;
// }