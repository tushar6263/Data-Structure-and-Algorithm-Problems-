#include<iostream>
using namespace std;

int main(){
    int a =7 , b=8;
    cout<<"a&b= "<<(a&b)<<endl;
    cout<<"a|b= "<<(a|b)<<endl;
    cout<<"~a= "<<(~a)<<endl;
    cout<<"a^b= "<<(a^b)<<endl;

    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    

    cout<<(a++)<<endl;
    cout<<(++a)<<endl;
    cout<<(a--)<<endl;
    cout<<(--a)<<endl;
}