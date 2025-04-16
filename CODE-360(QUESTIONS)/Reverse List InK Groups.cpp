//Question Link:- https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&leftPanelTabValue=PROBLEM

//Solution:- 
// Node* kReverse(Node* head, int k) {
//     if (head == NULL) return NULL;

//     // Step 1: Check if we have at least k nodes left
//     Node* temp = head;
//     int count = 0;
//     while (temp != NULL && count < k) {
//         temp = temp->next;
//         count++;
//     }

//     if (count < k) {
//         // Less than k nodes, leave as is
//         return head;
//     }

//     // Step 2: Reverse first k nodes
//     Node* curr = head;
//     Node* prev = NULL;
//     Node* next = NULL;
//     count = 0;

//     while (curr != NULL && count < k) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }

//     // Step 3: Recursively call for the rest of the list
//     if (next != NULL) {
//         head->next = kReverse(next, k);
//     }

//     // Step 4: Return new head of the reversed group
//     return prev;
// }
