//Question Link :-https://www.naukri.com/code360/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan&leftPanelTabValue=PROBLEM

//Solution:-

// bool isCircular(Node* head){
//     if(!head)return true;

//   if(!head->next)return false;

//   Node *slow=head;
//   Node *fast=head;

//   while(fast && fast->next)
//   {
//       slow=slow->next;
//       fast=fast->next->next;
//       if(slow==fast)
//       {
//           break;
//       }
//   }

//   if(slow==head && slow==fast )return true;

//   return false;
// }
