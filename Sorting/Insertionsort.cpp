//-----Question Link:-https://www.naukri.com/code360/problems/insertion-sort_3155179--------------------

#include <iostream>
using namespace std;
#include <vector>
void insertionSort(int n, vector<int> &arr){
   int i=1;
   while(i<n){
       int temp =arr[i];
       int j = i-1;
       while(j>=0){
           if(arr[j]>temp){
               arr[j+1] = arr[j];
           }
           else{
               break;
           }
           j--;
       }
       arr[j+1] = temp;
       i++;
   }
}