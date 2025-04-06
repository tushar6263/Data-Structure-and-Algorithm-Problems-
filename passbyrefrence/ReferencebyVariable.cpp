#include<iostream>
using namespace std;

int update(int &a){
    a++;
}


int main(){
    int a =5;
    cout<<"before "<<a<<endl;
    update(a);
    cout<<"After "<<a<<endl;
     return 0;
}