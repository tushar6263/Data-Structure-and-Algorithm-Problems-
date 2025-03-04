//----> Check If The String Is A Palindrome
//----> Question LInk:-https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// char toLowerCase(char ch){

//   if(ch >= 'a' && ch <= 'z'){
//     return ch;
//   }

//   else {
//     char temp = ch - 'A' + 'a';
//     return temp;
//   }
// }

// bool validCharacter(char ch){
//   return ((ch>='a' && ch<='z')||(ch>='0' && ch<='9')||(ch>='A' && ch<='Z'));
// }

// bool checkPalindrome(string s) {
//   int st=0; int e = s.length()-1;
//   while(st<=e){
//     while(st<e && !validCharacter(s[st])){
//       st++;
//     }

//     while(st<e && !validCharacter(s[e])){
//       e--;
//     }

//     if(toLowerCase(s[st])!=toLowerCase(s[e])){
//       return false;
//     }

//     st++;
//     e--;
//   }

//   return true;
// }