//Question Link:-https://www.naukri.com/code360/problems/redundant-brackets_975473

//SOlution:-
// #include<stack>
// bool findRedundantBrackets(string &s)
// {
//     stack<char> st;
//     for(int i=0; i<s.length(); i++) {
//         char ch =s[i];
        
//         if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch);
//         }
//         else
//         {
//             //ch ya toh ')' hai or lowercase letter
            
//             if(ch == ')') {
//                 bool isRedundant = true;
                
//                 while(st.top() != '(') {
//                     char top = st.top();
//                     if(top == '+' ||top == '-' || top == '*' || top == '/') {
//                         isRedundant = false;
//                     }
//                     st.pop();
//                 }
                
//                 if(isRedundant == true)
//                     return true;
//                 st.pop();
//             }
            
//         } 
//     }
//     return false;
// }