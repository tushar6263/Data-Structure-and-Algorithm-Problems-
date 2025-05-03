//Question Link:-https://www.naukri.com/code360/problems/first-negative-integer-in-every-window-of-size-k_1164406

//Solution:-
// #include <bits/stdc++.h> 
// vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
// {
//   deque<int> dq;
//   vector<int> ans;

//   for(int i=0;i<k;i++){
//       if(arr[i]<0){
//           dq.push_back(i);
//       }
//   }

//   //Store answer of first k sized Window
//   if(dq.size()>0){
//       ans.push_back(arr[dq.front()]);
//   }
//   else{
//       ans.push_back(0);
//   }

//   //process for remaining window
//   for(int i=k;i<n;i++){
//       //removal
//       if(!dq.empty() && i-dq.front()>=k){
//           dq.pop_front();
//       }
//       //addition
//       if(arr[i]<0){
//           dq.push_back(i);
//       }

//       //ans store
//       if(dq.size()>0){
//           ans.push_back(arr[dq.front()]);
//       }
//       else{
//           ans.push_back(0);
//       }
//   }
//   return ans;
// }

