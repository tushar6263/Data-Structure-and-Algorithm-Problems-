//Question Link:-https://www.naukri.com/code360/problems/first-non-repeating-character_920324
//Solution:-

// #include <bits/stdc++.h> 
// void interLeaveQueue(queue < int > & q) {
//      queue<int> newq;
//     int halfSize = q.size() / 2;

//     // Push first half of the queue into newq
//     for (int i = 0; i < halfSize; i++) {
//         int val = q.front();
//         newq.push(val);
//         q.pop();
//     }

//     // Interleave elements from newq and remaining elements in q

//     while(!newq.empty()){
//        int val = newq.front();
//        newq.pop();
//        q.push(val);
//        val = q.front();
//        q.pop();
//        q.push(val);
//     }
// }