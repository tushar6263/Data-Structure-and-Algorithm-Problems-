//Question Link :- https://www.naukri.com/code360/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_codestudio_lovebabbar28thjan&leftPanelTabValue=PROBLEM

//Solution:-

// Node* floydDetectLoop(Node* head) {

//     if(head == NULL)
//         return NULL;

//     Node* slow = head;
//     Node* fast = head;

//     while(slow != NULL && fast !=NULL) {
        
//         fast = fast -> next;
//         if(fast != NULL) {
//             fast = fast -> next;
//         }

//         slow = slow -> next;

//         if(slow == fast) {
//             return slow;
//         }
//     }

//     return NULL;

// }

// Node* getStartingNode(Node* head) {

//     if(head == NULL) 
//         return NULL;

//     Node* intersection = floydDetectLoop(head);
    
//     if(intersection == NULL)
//         return NULL;
    
//     Node* slow = head;

//     while(slow != intersection) {
//         slow = slow -> next;
//         intersection = intersection -> next;
//     }  

//     return slow;

// }

// Node *removeLoop(Node *head)
// {
//     if( head == NULL)
//         return NULL;

//     Node* startOfLoop = getStartingNode(head);
    
//     if(startOfLoop == NULL)
//         return head;
    
//     Node* temp = startOfLoop;

//     while(temp -> next != startOfLoop) {
//         temp = temp -> next;
//     } 

//     temp -> next = NULL;
//     return head;
// }