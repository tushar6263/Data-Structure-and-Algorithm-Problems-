#include<iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> a ={1,2,3,4,5};
    for (int i = 0; i < a.size(); i++)
    {
        // cout<<a[i]<<endl;
    }
    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    
}