//Question Link:-https://www.naukri.com/code360/problems/remove-duplicates-from-an-unsorted-linked-list_1069331

//Solution:-
// Node *removeDuplicates(Node *head)
// {
//     if (head == NULL) return NULL;

//     unordered_map<int, bool> visited;
//     Node* curr = head;
//     Node* prev = NULL;

//     while (curr != NULL) {
//         if (visited[curr->data]) {
//             // Duplicate found, remove the node
//             prev->next = curr->next;
//             Node* temp = curr;
//             curr = curr->next;
//             delete temp;
//         } else {
//             visited[curr->data] = true;
//             prev = curr;
//             curr = curr->next;
//         }
//     }

//     return head;
// }