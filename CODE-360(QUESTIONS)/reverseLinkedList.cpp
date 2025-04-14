//Question Link:-https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651073/offering/10442133?leftPanelTabValue=PROBLEM&customSource=studio_nav

//Solution:-
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

// Node* reverseLinkedList(Node *head)
// {
//     if(head == NULL || head ->next == NULL){
//         return head;
//     }

//     Node* prev =NULL;
//     Node*forward =NULL;
//     Node* curr =head;
//     while(curr != NULL){
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
