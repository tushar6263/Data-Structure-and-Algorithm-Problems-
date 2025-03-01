#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int ,string>m;
    m[1] = "Tushar";
    m[13] ="hero";
    m[2] = "patel";

    m.insert({5, "is a coder"});

    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13-->"<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
     return 0;
}