#include<iostream>
#include <stack>
using namespace std;
//implemention using the linked list 
#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Push an element to the top
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << val << endl;
    }

    // Pop the top element
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop." << endl;
            return -1;
        }
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        cout << "Popped: " << poppedValue << endl;
        return poppedValue;
    }

    // Peek at the top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    // Display the stack
    void display() {
        Node* current = top;
        cout << "Stack (top to bottom): ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to clean up memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};



//implemention using the array
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this-> size = size;
        arr= new int [size];
        top = -1;
    }
     
    void push (int element){
        if(size- top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }
    int peak(){
        if(top >=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(22);
    st.push(33);
    st.push(44);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is Empty mere dost"<<endl;
    }else
    cout<<"Stack is  not Empty mere dost"<<endl;
    // stack <int> s;
    // s.push(1);
    // s.push(2);
    // cout<<"Top element of stack " <<s.top()<<endl;
    // s.pop();
    // cout<<"Top element of stack " <<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"Stack is the empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty "<<endl;
    // }
    //  return 0;
}