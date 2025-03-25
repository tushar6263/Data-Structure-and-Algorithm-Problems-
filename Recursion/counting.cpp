#include<iostream>
using namespace std;

int printcounting(int n){
    if(n==0){
        return 1;
    }
    printcounting(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
     printcounting(n);
     return 0;
}