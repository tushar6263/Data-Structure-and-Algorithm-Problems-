#include<iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

Node* insertIntoBST(Node* root , int d){

    //base case
    if(root ==NULL){
        root = new Node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertIntoBST(root->right ,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
}

void takeInput(Node* &root){
    int d;
    cin>>d;
    while(d != -1){
      root = insertIntoBST(root,d);
      cin >>d;
    }
}
void Inorder(Node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //LNR
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(Node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //NLR
     cout<<root->data<<" ";
     Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //LRN
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

int main(){
    Node* root = NULL;
    cout<<"Enter a data to create a Binary tree search"<<endl;
    takeInput(root);

    cout<<"Printing th BST"<<endl;
    levelOrderTraversal(root);

    cout<<endl<< "printing  Inorder"<<endl;
    Inorder(root);

    cout<<endl<<"Printing Preorder"<<endl;
    Preorder(root);

    cout<<endl<<"Printing Postorder"<<endl;
    Postorder(root);
       cout<<endl;
    cout<<"min value is:-" <<minVal(root)->data<<endl;
    cout<<"max value is:-" <<maxVal(root)->data<<endl;
    return 0;
}