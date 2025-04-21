//Question Link :-https://leetcode.com/problems/copy-list-with-random-pointer/description/

//Solution:-

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
//     private:
//         void insertAtTail(Node*& head, Node*& tail, int d) {
//             Node* newNode = new Node(d);
//             if (head == NULL) {
//                 head = newNode;
//                 tail = newNode;
//                 return ;
//             } else {
//                 tail->next = newNode;
//                 tail = newNode;
//             }
//         }
    
//     public:
//         Node* copyRandomList(Node* head) {
//             if (head == NULL) return NULL;
    
//             // Step 1: Create clone list with only next pointers
//             Node* cloneHead = NULL;
//             Node* cloneTail = NULL;
    
//             Node* temp = head;
//             while (temp != NULL) {
//                 insertAtTail(cloneHead, cloneTail, temp->val); // fixed from data to val
//                 temp = temp->next;
//             }
    
//             // Step 2: Create mapping from original nodes to cloned nodes
//             unordered_map<Node*, Node*> oldToNewNode;
//             Node* originalNode = head;
//             Node* cloneNode = cloneHead;
    
//             while (originalNode != NULL) {
//                 oldToNewNode[originalNode] = cloneNode;
//                 originalNode = originalNode->next;
//                 cloneNode = cloneNode->next;
//             }
    
//             // Step 3: Assign random pointers using the mapping
//             originalNode = head;
//             cloneNode = cloneHead;
    
//             while (originalNode != NULL) {
//                 cloneNode->random = oldToNewNode[originalNode->random];
//                 originalNode = originalNode->next;
//                 cloneNode = cloneNode->next;
//             }
    
//             return cloneHead;
//         }
//     };
    