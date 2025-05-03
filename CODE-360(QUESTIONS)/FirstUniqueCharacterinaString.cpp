//Question Link:- https://leetcode.com/problems/first-unique-character-in-a-string/description/

//Solution:-
// class Solution {
//     public:
//         int firstUniqChar(string s) {
//            unordered_map<char, int> count;
    
//         // Step 1: Count frequency of each character
//         for (char c : s) {
//             count[c]++;
//         }
    
//         // Step 2: Find index of first unique character
//         for (int i = 0; i < s.length(); ++i) {
//             if (count[s[i]] == 1)
//                 return i;
//         }
    
//         return -1;
//         }
//     };