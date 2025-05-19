//Question Link:-https://www.naukri.com/code360/problems/longest-path_3210613

//Solution:-
#include <bits/stdc++.h> 
/*Structure of the Node of the Binary Tree is
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};

void solve(Node *root ,int len, int &maxlen , int sum , int &maxsum){
    if(root == NULL){
        if(len>maxlen){
            maxlen = len;
            maxsum = sum;
        }
        else if(len == maxlen){
            maxsum = max(sum,maxsum);
        }
        return;
    }
    sum = sum + root->data;
    solve(root->left,len+1, maxlen, sum,maxsum);
    solve(root->right,len+1, maxlen, sum,maxsum);
}

int longestPath(Node *root)
{
    int len =0;
    int maxlen =0;
    
    int sum =0;
    int maxsum =0;
    
    solve(root,len,maxlen,sum,maxsum);
    return maxsum;
}
*/