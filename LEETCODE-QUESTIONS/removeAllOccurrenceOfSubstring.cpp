//---->Question:- Remove All Occurrences of a Substring
//---->Question link:-https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

//-------->Solution:-

// class Solution {
//     public:
//         string removeOccurrences(string s, string part) {
//             while(s.length()!=0 && s.find(part)<s.length()){
//                 s.erase(s.find(part),part.length());
//             }
//             return s;
//         }
//     };