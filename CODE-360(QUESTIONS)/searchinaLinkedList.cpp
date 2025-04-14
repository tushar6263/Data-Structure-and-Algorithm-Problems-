//Question:- https://www.naukri.com/code360/guided-paths/data-structures-algorithms/content/651073/offering/10442134?leftPanelTabValue=PROBLEM&customSource=studio_nav

// Solution:-

// class Node
//     {
//     public:
//         T data;
//         Node<T> *next;
//         Node()
//         {
//             this->data = 0;
//             this->next = NULL;
//         }
//         Node(T data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//         Node(T data, T* next)
//         {
//             this->data = data;
//             this->next = next;
//         }
//     };

// int searchInLinkedList(Node<int> *head, int k) {
//       while(head)  {
//         if(head->data == k) {
//             return 1;
//         }
//         head = head->next;
//     }
//    return 0;
// }