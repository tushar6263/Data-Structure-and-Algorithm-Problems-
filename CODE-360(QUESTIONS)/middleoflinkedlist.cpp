//Question link:-  https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651073/offering/10442132?leftPanelTabValue=PROBLEM&customSource=studio_nav

//Solution:-

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node *findMiddle(Node *head) {
//     int cnt1 =0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cnt1++;
//         temp = temp->next;
//     }
//     int mid = cnt1/2;
//      temp = head;  
//     int cnt2 = 0;
//     while(cnt2 < mid){
//         temp = temp -> next;
//         cnt2 = cnt2 + 1;

//     }

//     return temp;
    

// }

