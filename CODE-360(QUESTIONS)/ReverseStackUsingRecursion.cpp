//Question Link:-https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875
//solution:-
// void insertAtBottom(stack<int> &myStack , int element){
//     //base case
//   if(myStack.empty()){
//       myStack.push(element);
//       return;
//   }
//   int num = myStack.top();
//   myStack.pop();

//   //recursive call
//   insertAtBottom(myStack,element);

//   myStack.push(num);
// }

// void reverseStack(stack<int> &stack) {
//    //Base case
//    if(stack.empty()){
//        return ;
//    }
//    int num = stack.top();
//    stack.pop();

//    //recursive call
//    reverseStack(stack);
//    insertAtBottom(stack,num);
// }