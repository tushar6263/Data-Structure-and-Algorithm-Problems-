#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key){
    for(int i=0; i<size ;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,6,7 ,3 ,1,9,-5,-43,34,54};

    cout<<"Enter the element to search for:- ";
    int key;
    cin>>key;
    bool found = search(arr, 10 ,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
     
}