//----->https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1561038066/

// class Solution {
//     public:
//         bool check(vector<int>& nums) {
//             int n= nums.size();
//             int count =0;
    
//             for(int i=1;i<n;i++){
//                 if(nums[i-1]>nums[i]){
//                     count++;
//                 }
//             }
//                 if(nums[n-1]>nums[0]){
//                     count++;
//                 }
            
//             return count<=1;
//         }
//     };