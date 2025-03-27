#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int main(){
    int n;
    cout<<"Enter the size of array:- ";
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    cout<<"Write the array:-";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
     
    int ans = isSorted(arr,n);
     cout<<ans;
}