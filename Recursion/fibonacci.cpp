#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int fib1 = fibonacci(n-1);
    int fib2 = fibonacci(n-2);
    return fib1 + fib2;
}


int main(){
    int n ;
    cin>>n;
    for(int i=0 ; i<n;i++){
        cout << fibonacci(i)<<" ";
    }
     return 0;
}