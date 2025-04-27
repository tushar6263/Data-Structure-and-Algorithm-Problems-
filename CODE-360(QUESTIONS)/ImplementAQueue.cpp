//Question Link:-https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908

//Solution:
#include<iostream>
using namespace std;

class  Queue{
   int *arr;
   int qfront;
   int rear;
   int size;

   //constructor
   Queue(){
    size = 100001;
    arr = new int[size];
    qfront = 0;
    rear =0;
   }
//check empty
bool isEmpty(){
    if(qfront == rear){
        return true;
    }
    else{
        return false;
    }
}

   // for push 
   void enqueue(int data){
    if(rear == size){
        cout<<"Queue is Full"<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
   }

   int dequeue(){
    if(qfront == rear){
        return -1;
    }
    else{
        int ans = arr[qfront];
        arr[qfront] =-1;
        qfront++;
        if(qfront == rear){
            qfront =0;
            rear =0;
        }
        return ans;
    }
   }

   int qfront(){
    if(qfront == rear){
        return -1;
    }
    else{
        return arr[qfront];
    }
   }
};

int main(){
    
     return 0;
}