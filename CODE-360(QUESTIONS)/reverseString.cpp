//Question Link:-https://www.naukri.com/code360/problems/reverse-the-string_799927?leftPanelTab=0&leftPanelTabValue=SUBMISSION&nps=true
// #include <bits/stdc++.h> 
// using namespace std;

// void reverseHelper(string &str, int left, int right) {
//     if (left >= right) return; // Base case: stop when pointers meet or cross

//     swap(str[left], str[right]); // Swap characters
//     reverseHelper(str, left + 1, right - 1); // Recursive call with updated indices
// }

// // Wrapper function for cleaner function call
// string reverseString(string str) {
//     reverseHelper(str, 0, str.length() - 1); 
//     return str;
// }
