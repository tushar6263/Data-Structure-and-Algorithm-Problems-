//Question Link:-https://www.naukri.com/code360/problems/kth-ancestor-of-a-node-in-binary-tree_842561

//Solution:-
#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

    // Helper function to find the kth ancestor
    BinaryTreeNode<int>* solve(BinaryTreeNode<int> *root, int targetNodeVal, int &k) {
        if (root == NULL) {
            return NULL;
        }
        
        if (root->data == targetNodeVal) {
            return root;
        }
        
        BinaryTreeNode<int>* leftAns = solve(root->left, targetNodeVal, k);
        BinaryTreeNode<int>* rightAns = solve(root->right, targetNodeVal, k);
        
        if (leftAns != NULL && rightAns == NULL) {
            k--;
            if (k == 0) {
                return root;
            }
            return leftAns;
        }
        
        if (leftAns == NULL && rightAns != NULL) {
            k--;
            if (k == 0) {
                return root;
            }
            return rightAns;
        }
        
        return NULL;
    }
    
    // Main function to return the kth ancestor's value
    int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
        BinaryTreeNode<int>* ans = solve(root, targetNodeVal, k);
        
        // If ans is the target node, and k wasn't decremented to 0, no ancestor was found
        if (ans == NULL || ans->data == targetNodeVal) {
            return -1;
        }
        return ans->data; 
    }
*/