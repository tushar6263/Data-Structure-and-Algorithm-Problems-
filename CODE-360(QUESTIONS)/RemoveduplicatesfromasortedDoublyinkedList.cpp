//Question Link:-https://www.naukri.com/code360/problems/remove-duplicates-from-a-sorted-doubly-linked-list_2420283

//Solution:-

// Node * removeDuplicates(Node *head)
// {
//     if(head == NULL)
//     return NULL;

//     Node* curr = head;
//     while(curr -> next != NULL){
//         if(curr ->data == curr->next ->data){
//             Node* Next_Next = curr->next->next;
//             Node* deleteNode = curr->next;
//             delete(deleteNode);
//             curr->next = Next_Next;
//         }
//         else{
//             curr = curr ->next;
//         }
//     }
//     return head;
// }
