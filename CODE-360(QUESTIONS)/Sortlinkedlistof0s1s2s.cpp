//Question Link:-https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937

//Solution:-
// Node* sortList(Node *head){
//     Node* temp  = head;
//     int ZeroCount =0;
//     int OneCount =0;
//     int TwoCount =0;

//     while(temp !=NULL){
//         if(temp -> data == 0){
//             ZeroCount++;
//         }
//         else if(temp -> data == 1){
//             OneCount++;
//         }
//         else if(temp -> data == 2){
//             TwoCount++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp!=NULL){
//         if(ZeroCount!=0){
//             temp -> data =0;
//             ZeroCount--;
//         }
//         else if(OneCount!=0){
//             temp->data =1;
//             OneCount--;
//         }
//         else if(TwoCount!=0){
//             temp->data =2;
//             TwoCount--;
//         }
//         temp = temp->next;
//     }
//     return head;

// }