//QUestion Link:-https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771

//Solution:-
// #include <bits/stdc++.h> 
// queue<int> reverseElements(queue<int> q, int k)
// {
//     stack<int>s;

//     for(int i=0;i<k;i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }

//     while(!s.empty()){
//         int val =s.top();
//         s.pop();
//         q.push(val);
//     }

//     int t = q.size()-k;

//     while(t--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }
