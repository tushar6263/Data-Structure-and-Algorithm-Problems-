//Question Link:- https://www.naukri.com/code360/problems/reversing-queue_1170046

//Solution:-
// #include <bits/stdc++.h> 
// queue <int> reverse(queue < int > & q) {
//     stack<int> s;
//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
//     return q;
// }