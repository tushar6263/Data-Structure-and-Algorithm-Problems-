//Question Link:- https://leetcode.com/problems/reverse-linked-list/description/

//Solution:-class Solution {
// public:
// ListNode* reverseList(ListNode* head) {
//     //for empty case
//     if(head == NULL || head->next == NULL){
//         return head;
//     }
// ListNode* curr = head;
// ListNode* prev = NULL;
// ListNode* forward = NULL;

// while(curr !=NULL){
//   forward = curr->next;
//   curr->next = prev;
//   prev= curr;
//   curr = forward;
// }
//     return prev;

// }
// };