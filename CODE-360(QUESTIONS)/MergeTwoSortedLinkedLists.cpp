//Question Link:- https://www.naukri.com/code360/problems/merge-two-sorted-linked-lists_800332

//Solution:-
// #include <bits/stdc++.h>

// /************************************************************

//     Following is the linked list node structure.
    
//     template <typename T>
//     class Node {
//         public:
//         T data;
//         Node* next;

//         Node(T data) {
//             next = NULL;
//             this->data = data;
//         }

//         ~Node() {
//             if (next != NULL) {
//                 delete next;
//             }
//         }
//     };

// ************************************************************/

// Node<int>* solve(Node<int>* first, Node<int>* second){
//     Node<int>* curr1 = first;
//     Node<int>* curr2 = second;
//     Node<int>* Next1 = curr1->next;
//     Node<int>* Next2 = curr2->next;

//     if(first->next == NULL){
//         first->next = second;
//         return first;
//     }

//     while(Next1 != NULL && curr2 != NULL){
//       if((curr2->data >= curr1->data) && (Next1->data >= curr2->data)){
//          curr1->next = curr2;
//          Next2 = curr2->next;
//          curr2->next = Next1;

//          curr1 = curr2;
//          curr2 = Next2;
//       }
//       else{
//           curr1 = curr1->next;
//           Next1 = Next1->next;

//           if(Next1 == NULL){
//               curr1->next = curr2;
//               return first;
//           }
//       }
//     }
//     return first;
// }


// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     //if list 1 is empty
//    if(first == NULL){
//        return second;
//    }
//    //if list 2 is empty
//    if(second == NULL){
//        return first;
//    }
//    if(first->data <= second->data){
//        return solve(first,second);
//    }
//    else {
//       return solve(second , first);
//    }
// }