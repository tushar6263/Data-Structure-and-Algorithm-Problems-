#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    // Constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
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

void Inorder(node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //LNR
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //NLR
     cout<<root->data<<" ";
     Preorder(root->left);
    Preorder(root->right);
}
void Postorder(node* root){
    //Base case
    if(root == NULL){
        return ;
    }
     //LRN
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromlevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp =q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp ->left = new node(leftData);
            q.push(temp->left);
        }


        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp ->right = new node(rightData);
            q.push(temp->right);
        }
    }
}



int main()
{
    node *root = NULL;
     buildFromlevelOrder(root);
     levelOrderTraversal(root);
   
   /* 
   // creating a Tree
    root = buildTree(root);
    // Level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);
    cout<<"Inorder traversal is: ";
    Inorder(root);
    cout<<endl;
    cout<<"Postorder traversal is: ";
    Postorder(root);
    cout<<endl;
    cout<<"Preorder traversal is: ";
    Preorder(root); */ 
    return 0;
}