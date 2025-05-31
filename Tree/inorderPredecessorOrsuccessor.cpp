#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node* parent;

    Node(int val) {
        key = val;
        left = right = parent = nullptr;
    }
};

class BST {
private:
    Node* root;

public:
    BST() {
        root = nullptr;
    }

    Node* getRoot() {
        return root;
    }

    // Public insert function
    void insert(int key) {
        root = insertNode(root, key, nullptr);
    }

    // Find the minimum value node
    Node* findMin() {
        return findMinNode(root);
    }

    // Find inorder predecessor of a node
    Node* inorderPredecessor(Node* node) {
        if (!node) return nullptr;

        if (node->left)
            return findMaxNode(node->left);

        Node* curr = node;
        while (curr->parent && curr->parent->left == curr)
            curr = curr->parent;

        return curr->parent;
    }

    // Find inorder successor of a node
    Node* inorderSuccessor(Node* node) {
        if (!node) return nullptr;

        if (node->right)
            return findMinNode(node->right);

        Node* curr = node;
        while (curr->parent && curr->parent->right == curr)
            curr = curr->parent;

        return curr->parent;
    }

private:
    // Recursive helper to insert node with parent tracking
    Node* insertNode(Node* node, int key, Node* parent) {
        if (!node) {
            Node* newNode = new Node(key);
            newNode->parent = parent;
            return newNode;
        }

        if (key < node->key)
            node->left = insertNode(node->left, key, node);
        else
            node->right = insertNode(node->right, key, node);

        return node;
    }

    // Helper to find the minimum node
    Node* findMinNode(Node* node) {
        while (node && node->left)
            node = node->left;
        return node;
    }

    // Helper to find the maximum node
    Node* findMaxNode(Node* node) {
        while (node && node->right)
            node = node->right;
        return node;
    }
};

int main() {
    BST tree;
    tree.insert(20);
    tree.insert(10);
    tree.insert(30);
    tree.insert(5);
    tree.insert(2);  // Minimum node

    Node* minNode = tree.findMin();
    cout << "Minimum value node: " << minNode->key << endl;

    Node* pred = tree.inorderPredecessor(minNode);
    if (pred)
        cout << "Predecessor of " << minNode->key << " is " << pred->key << endl;
    else
        cout << "Predecessor of " << minNode->key << " does not exist." << endl;

    Node* succ = tree.inorderSuccessor(minNode);
    if (succ)
        cout << "Successor of " << minNode->key << " is " << succ->key << endl;
    else
        cout << "Successor of " << minNode->key << " does not exist." << endl;

    return 0;
}
