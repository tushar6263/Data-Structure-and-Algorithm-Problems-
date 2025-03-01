//--------Question Link:-https://www.naukri.com/code360/problems/selection-sort_981162
//--------Solution:-
#include <iostream>
using namespace std;
#include <vector>
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minIndex =i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}