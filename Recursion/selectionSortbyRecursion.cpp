#include<iostream>
using namespace std;

void selectionSort(int arr[] ,int start, int n){
    //Base case
    if(start >= n-1){
        return ;
    }

    //Processing
    int minIndex = start;
    for(int i = start+1;i<n;i++){
        if(arr[minIndex]>arr[i]){
            minIndex = i;
        }
    }
    swap(arr[start] ,arr[minIndex]);

    selectionSort(arr,start+1,n);
}
int main(){
    int arr[] = {3, 1, 5, 2, 7, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    // Calling function
    selectionSort(arr,0, n);
 
    //printing sorted array
    for (int i = 0; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

